
#include <stdio.h>
#include "Validate.h"

unsigned int count_leading_clear_bits(unsigned int num);

int main()
{
    unsigned int num;
    int a;
    printf("enter the number ");
    scanf("%d",&num);
    binary(num);
    a = count_leading_clear_bits(num);
    printf("\n");
    printf("%d",a);
    return 0;
}

unsigned int count_leading_clear_bits(unsigned int num)
{
    int i = 31;
    int count = 0;
    while( i >=  0 ) {
         if (  !(( num >> i ) & 1)) {
            count++;
         } else {
            break;
         }

         i--;
    }
    return count;
}

