#include <stdio.h>
#include "Validate.h"

unsigned int toggle_evenbits(unsigned int num);

int main()
{
    unsigned int num;
    int a;
    printf("enter the number");
    scanf("%d",&num);
    binary(num);
    printf("\n");
    a = toggle_evenbits(num);
    binary(a);
    return 0;

}


unsigned int toggle_evenbits(unsigned int num)
{
   int i = 0;
   while ( i <= 31 ) {
     num = num ^ ( 1 << i );
     i = i+ 2;
   }
   return num;
}

