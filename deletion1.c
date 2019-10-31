#include <stdio.h>
#define n 100

int main(){

  /*  char str[20];
    printf("Enter a string");
    scanf("%[^\n]", &str);  //scanning the whole string, including the white spaces
    printf("%s", str);*/

char list[5] = {'m', 'r', 's', 't', 'n'};
//printf("enter the characters");
gets(list);
printf("%s", list);

return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    char *ptr;

    printf("Enter number of characters to store: ");
    scanf("%d", &n);

    ptr = (char*)malloc(n*sizeof(char));

    for(i=0; i < n; i++)
    {
        printf("Enter ptr[%d]: ", i);
        // notice the space preceding %c is necessary to read all whitespace in the input buffer

        scanf(" %c", ptr+i);
    }

    printf("\nPrinting elements of 1-D array: \n\n");

    for(i = 0; i < n; i++)
    {
        printf("%c ", ptr[i]);
    }

    // signal to operating system program ran fine
    return 0;
}

*/


















  /*
    char str[10];
char *p = str;

Now all the operations mentioned above are valid. Another way we can use ptr is by allocation memory dynamically using malloc() or calloc() functions.
1
2
3

char *ptr;
ptr = (char*)malloc(10*sizeof(char)); // allocate memory to store 10
characters
*/



