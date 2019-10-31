#include <stdio.h>
#define n 100

int main(){

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


/*
No, you can't set them to arbitrary values in one statement (unless done as part of the declaration).

You can either do it with code, something like:

myArray[0] = 1;
myArray[1] = 2;
myArray[2] = 27;
:
myArray[99] = -7;

or (if there's a formula):

for (int i = 0; i < 100; i++) myArray[i] = i + 1;







for(i=0;i<N;i++)
{
     array[i] = i;
}



#include<stdio.h>

int main(){

int n; //array variable

printf(“Enter the array size”);

scanf(“%d”, &n);

int arr[n]; //array with variable size

//write rest of the code

return 0;

}






for (i = 0; i < MAX ; i++)  {
    array[i] = i;
}*/
