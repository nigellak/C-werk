#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int link;
    struct node *next;
}node;

struct node *head = NULL;
struct node *trail = NULL;

void print() {
   struct node *ptr = head;
   printf("\n[ ");

 while(ptr != NULL) {
      printf("(%d,%d) ",ptr->link,ptr->data);
      ptr = ptr->next;
   }

   printf(" ]");
}


void insert(int data,int link) {

   struct node *temp = (struct node*) malloc(sizeof(struct node));

   temp->link = link;
   temp->data = data;
   temp->next = head;//old first node
   temp = link;//first to new first node

}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    /*
     * If unable to allocate memory for head node
     */
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * Input data of node from the user
         */
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link the data field with data
        head->next = NULL; // Link the address field to NULL

        temp = head;

        /*
         * Creates n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}




void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}

void insert(){}
/*
void search(int data, int link){
    struct node *temp;

       temp = head;

       if (temp == NULL) {
          printf("Linked list is empty.\n");
          return;
       }
}

       printf("There are %d elements in linked list.\n", );

       while (temp->next != NULL) {
          printf("%d\n", temp->data);
          temp = temp->next;
       }
       printf("%d\n", temp->data);

}

bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}
*/

/*
int main() {
    int i;//counter
    //int element;//value
    //int temp;//temp ptr

printf("Enter node no. %d",i);
scanf("%d",&element);

temp=(struct node*)malloc(sizeof(struct node));

temp->data=element;
temp->next=NULL;
p=temp;
head=temp;

for (i=2;i<=n;i++)
 {
    printf("Enter node no. %d",i);
    scanf("%d",&element);

    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->next=NULL;
    p->next=temp;
    p=p->next;
 }



return 0;
}
 struct node *p, *temp, *head;
    int n,head;//no of nodes
    printf("Enter total number of nodes");
    scanf("%d",&n);

struct singlist{
struct node *head;
}singlist;

node* new_node(int data) {
  node *z;
  z = malloc(sizeof(struct node));
  z->data = data;
  z->next = NULL;

  return z;
}

/to make a new linked list
linked_list* new_linked_list(int data) {
  node *a; //new node for head of linked list
  a = new_node(data);

  linked_list *l = malloc(sizeof(linked_list)); //linked list
  l->head = a;

  return l;
}

//function to insert a node after a node
void insert_node_after(node *n, node *a) {
  n->next = a->next;
  a->next = n;
}*/
//./././././././.
   /* struct node *a, *b;
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));

    a->data = 10;
    b->data = 20;

    a->next = b;
    b->next = NULL;

    printf("%d\n%d\n",a->data, a->next->data);
    return 0;
}


TRAVERSE(L)
    temp = L.head
    while(temp != null)
        temp = temp.next*/

 //BTW you are malloc'ing the size of a pointer rather than the actual struct size. Should be malloc(sizeof(struct ll)); – alediaferia May 29 '15 at 9:45
    //Should be malloc(sizeof(*p1)) and be done with it. – E
