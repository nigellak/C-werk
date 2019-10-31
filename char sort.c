/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char ch, input[100], output[100];
int no[26] = {0}, n, c, t, x;

    printf("Enter some text\n");
    scanf("%s", input);

    n = (strlen(input));
   // storing how many times characters(a-z) appears in input string in an array

    for(c = 0; c < n; c++)
    {
    ch = input[c] - 'a';
    no[ch]++;
    }

    t=0;

    //insert characters 'a' to 'z' in output strings as many times as they appear in the out put string
    for (ch = 'a'; ch<= 'z'; ch++ )
    {
    x = ch - 'a';
        for (c = 0; c < no[x]; c++)
        {
         output[t] = ch;
         t++;
        }
    }
    output[t] = ch;

    printf("%s\n", output);
return 0;
}
*/

/*
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    void sort_string(char*);

    int main()
    {
       char string[100];

       printf("Enter some text\n");
       gets(string);

       sort_string(string);
       printf("%s\n", string);

       return 0;
    }

    void sort_string(char *s)
    {
       int c, d = 0, length;
       char *pointer, *result, ch;

       length = strlen(s);

       result = (char*)malloc(length+1);

       pointer = s;

       for ( ch = 'a' ; ch <= 'z' ; ch++ )
       {
          for ( c = 0 ; c < length ; c++ )
          {
             if ( *pointer == ch )
             {
                *(result+d) = *pointer;
                d++;
             }
             pointer++;
          }
          pointer = s;
       }
       *(result+d) = '\0';

       strcpy(s, result);
       free(result);
    }
*/

#include<stdio.h>
#include<stdlib.h>

/* structure for a node */
struct Node
{
    int data;
    struct Node *next;
};

/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(struct Node **start_ref, int data);

/* Function to bubble sort the given linked list */
void bubbleSort(struct Node *start);

/* Function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b);

/* Function to print nodes in a given linked list */
void printList(struct Node *start);

int main()
{
    int arr[] = {12, 56, 2, 11, 1, 90};
    int list_size, i;

    /* start with empty linked list */
    struct Node *start = NULL;

    /* Create linked list from the array arr[].
      Created linked list will be 1->11->2->56->12 */
    for (i = 0; i< 6; i++)
        insertAtTheBegin(&start, arr[i]);

    /* print list before sorting */
    printf("\n Linked list before sorting ");
    printList(start);

    /* sort the linked list */
    bubbleSort(start);

    /* print list after sorting */
    printf("\n Linked list after sorting ");
    printList(start);

    getchar();
    return 0;
}


/* Function to insert a node at the beginning of a linked list */
void insertAtTheBegin(struct Node **start_ref, int data)
{
    struct Node *ptr1 = (struct Node*)malloc(sizeof(struct Node));
    ptr1->data = data;
    ptr1->next = *start_ref;
    *start_ref = ptr1;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *start)
{
    struct Node *temp = start;
    printf("\n");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

/* Bubble sort the given linked list */
void bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    /* Checking for empty list */
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

/* function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
