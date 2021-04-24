#include <stdio.h>
#include "Validate.h"

int main()
{
    int num;
    int i = 31;
    int t;
    printf("enter the number");
    scanf("%d",&num);
    binary(num);
    printf("\n");
    while ( i >= 0 ) {
          t = num;
          if ( !(num & (1 << i))) {
               num = num ^ ( 1 << i );
             break;
           }  
           i--;
    }
    binary(num);
}

