#include <stdio.h>
#include "Validate.h"

unsigned int invert_bits(unsigned int snum,unsigned int p,unsigned int n);


int main()
{
    int snum;
    int p;
    int n;
    int a;
    printf("enter the number");
    scanf("%d",&snum);
    printf("enter the postion");
    scanf("%d",&p);
    printf("enter the rotation");
    scanf("%d",&n);
    binary(snum);
    a = invert_bits(snum,p,n);
    printf("\n");
    binary(a);
    return 0;
}

unsigned int invert_bits(unsigned int snum,unsigned int p,unsigned int n)
{
     while ( n ) {
           if ( (snum >> p) & 1) {
              snum = snum ^ ( 1 << p );
           } else {
              snum = snum | ( 1 << p);
           }
           p--;
           n--;
     }
     return snum;
}


