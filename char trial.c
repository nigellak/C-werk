#include <stdio.h>
#include <string.h>

    int main()
    {
      char array[100], n, c, d, swap;

      printf("Enter number of elements\n");
      scanf("%s", &n);

      printf("Enter %s characters\n", n);

      for (c = 0; c < n; c++)
        scanf("%s", &array[c]);

      for (c = 0 ; c < n - 1; c++)
      {
        for (d = 0 ; d < n - c - 1; d++)
        {
          if (array[d] > array[d+1]) /* For decreasing order use < */
          {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
          }
        }
      }

      printf("Sorted list in ascending order:\n");

      for (c = 0; c < n; c++)
         printf("%s\n", array[c]);

      return 0;
    }

