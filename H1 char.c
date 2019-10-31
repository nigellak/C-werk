#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;          // Data
    struct node *next; // Address
};

struct node *head = NULL;
struct node *next = NULL;

//head = (struct node*)malloc(sizeof(struct node));


void createList(char n)
{
    struct node *singlist, *temp;
    char data;
    int i;

    head = malloc(sizeof(struct node));

    //Unable to allocate memory, hence exit
    if (head == NULL)
    {
        printf("Unable to allocate memory. Exit");
        exit(0);
    }

// Input head node data from user
    printf("Enter value of node 1: ");
    scanf("%c", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;

    //Create n nodes and add to the list
    for (i = 2; i <= n; i++)
    {
        singlist =(struct node*)malloc(sizeof(struct node));

       //no mem for singlist
        if (singlist == NULL)
        {
            printf("Unable to allocate memory. Exit.");
            exit(0);
        }
        printf("Enter value of node %d: ", i);
        scanf("%c", &data);

        singlist->data = data; // Link data field of singlist
        singlist->next = NULL; // The newNode should point to nothing

        temp->next = singlist; // Link previous node i.e. temp to the singlist
        temp = temp->next;
    }

}

//printout list
void printList()
{
    struct node *temp;

     //If the list is empty i.e. head = NULL,return.
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%c, ", temp->data);
        temp = temp->next;  // Move to next node
    }
    printf("\n");
}
/*
*void sortList() {

    int i;
    struct node *p;
    struct node *q;

    if(head=NULL)


   int i, j, k, tempKey, tempData;
   struct node *singlist;
   struct node *next;

   int size = length();
   k = size ;

   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      singlist = head;
      next = head->next;

      for ( j = 1 ; j < k ; j++ ) {

         if ( singlist->data > next->data ) {
            tempData = singlist->data;
            singlist->data = next->data;
            next->data = tempData;

            tempKey = singlist->temp;
            singlist->key = next->temp;
            next->temp = tempKey;
         }

         singlist = singlist->next;
         next = next->next;
      }
   }
}
*/


void sortList() {
   int i,count;
    struct Node *p;
    struct Node *q = NULL;


    if (head == NULL)  // Checking for empty list
        return;

    do
    {
    count = 0;
    p=head;
    }
    while (p->next != q)

        {
            if (p->data > p->next->data)
            {
                swap(ptr1, ptr1->next);
                count = 1;
            }
            p = p->next;
        }
        q = p;
    }
    while(count);

void swap(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}


int main()
{
    int n,data;
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    createList(n);

    struct node *p, *q;
    p=head;
     while(p->next!=NULL)
     {
        q=p->next;
        while(q!=NULL)
        {
            if(p->data > q->data)
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next
     }
    //sortList(n);

    printf("\nData in list: \n");
    printList();

    return 0;
}
