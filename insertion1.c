/*
#include <stdio.h>
#define n 100

int main(){
char list[4] = {'m', 'r', 't', 'n'};

if (list<0)
    printf("list does not exist")
else  ()



int array[n];
int j,k;

printf("please enter size of array:");
scanf("%d", &k);


printf("please enter the %d values:" ,k);
for (j=0; j<k; j++)
    {
    scanf("%d", &array[j]);
    }


printf("Array values are: ");
    for(j=0; j<k; j++)
    {
        printf("%d, ", array[j]);
    }
return 0;
}

*/

    #include <stdio.h>

    int main()
    {
       int array[100], position, c, n, value;

       printf("Enter number of elements in array\n");
       scanf("%d", &n);

       printf("Enter %d elements\n", n);

       for (c = 0; c < n; c++)
          scanf("%d", &array[c]);

       printf("Enter the location where you wish to insert an element\n");
       scanf("%d", &position);

       printf("Enter the value to insert\n");
       scanf("%d", &value);

       for (c = n - 1; c >= position - 1; c--)
          array[c+1] = array[c];

       array[position-1] = value;

       printf("Resultant array is\n");

       for (c = 0; c <= n; c++)
          printf("%d\n", array[c]);

       return 0;
    }
