#include <stdio.h>
 
int binary(int n)
{
    int i = 31;
    int temp;
    while( i >= 0 ) {
         temp = n;
         if ( (temp >> i) & 1 ) {
            printf("1");
         } else {
            printf("0");
         }
         i--;
    }
}        
 
