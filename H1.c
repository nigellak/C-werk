#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          // Data
    struct node *next; // Address
};

struct node *head = NULL;
struct node *next = NULL;

//head = (struct node*)malloc(sizeof(struct node));


void createList(int n)
{
    struct node *singlist, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    //Unable to allocate memory, hence exit
    if (head == NULL)
    {
        printf("Unable to allocate memory. Exit");
        exit(0);
    }

// Input head node data from user
    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;

    //Create n nodes and add to the list
    for (i = 2; i <= n; i++)
    {
        singlist = malloc(sizeof(struct node));

       //no mem for singlist
        if (singlist == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }
        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

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

     //If the list is empty i.e. head = NULL,
     //dont perform any action and return.

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        temp = temp->next;  // Move to next node
    }
    printf("\n");
}


int main()
{
    int n,data,temp;
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
        p=p->next;
     }


    //sortList(n);

    printf("\nData in list: \n");
    printList();

    free(head);
    head=NULL;
    free(next);
    next=NULL;
    free(p);
    p=NULL;
    free(q);
    q=NULL;
   // free(singlist);


    return 0;
}
