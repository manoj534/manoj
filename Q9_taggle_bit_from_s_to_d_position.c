#include <stdio.h>
#include "Validate.h"

int main()
{
   int num;
   int position1;
   int position2;
   int i = 0;
   printf("enter a number");
   scanf("%d",&num);
   binary(num);
   printf("enter the first position");
   scanf("%d",&position1);
   printf("enter the second position");
   scanf("%d",&position2);
   while ( i < 32 ) {
         if ( (i >= position1) & ( i <= position2)) {
              if ( (num >> i) & 1) {
                  num = num ^ ( 1 << i);
              } else {
                  num = num | ( 1 << i);
              }
          } else {
                num = num ;
         } 
                    
         i++;
    }
    printf("\n");
    binary(num);
    return 0;
}
