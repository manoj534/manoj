#include <stdio.h>
#include "Validate.h"

int main()
{
    unsigned int snum;
    unsigned int dnum;
    unsigned int s;
    unsigned int d;
    unsigned int n;
    printf("enter a number");
    scanf("%d",&snum);
    binary(snum);
    printf("enter number 2");
    scanf("%d",&dnum);
    binary(dnum);
    printf("enter the first value position");
    scanf("%d",&s);
    printf("enter the second value position");
    scanf("%d",&d);
    printf("enter the number of bits to be copied");
    scanf("%d",&n);
    copy_bits(snum,dnum,s,d,n);
    return 0;
}

   
