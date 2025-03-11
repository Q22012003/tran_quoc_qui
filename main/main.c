#include <stdio.h>
#include <math.h>
void main() {
    int tong = 0;
    int i = 0;
    int j = 0;
    for ( i = 1; i<11 ; i++)
    {
        for (j = 1; j < 11; j++)
        {
            tong = i * j;
            printf("%d x %d = %d\t", i, j, tong);
        }
        printf("\n");
    }
       
    }
          
