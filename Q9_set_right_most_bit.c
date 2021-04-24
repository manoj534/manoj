#include <stdio.h>
#include "Validate.h"

int main()
{
    int num;
    int i = 0;
    int t;
    printf("enter the number");
    scanf("%d",&num);
    binary(num);
    printf("\n");
    while ( i < 32 ) {
          t = num;
          if ( !(num & (1 << i))) {
               num = num ^ ( 1 << i );
             break;
           }  
           i++;
    }
    binary(num);
}

