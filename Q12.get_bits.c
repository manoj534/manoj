#include <stdio.h>
#include "Validate.h"

#define GETBITS(snum,p) ((snum >> p)&1)

//int GETBITS(int sum ,int p,int n);

int main ()
{
    int snum;
    int p;
    int n;
    int i = 0;
    int c = 0;
    printf("enter the value ");
    scanf("%d",&snum);
    binary(snum);
    printf("enter the position");
    scanf("%d",&p);
    printf("enter the number of bits to copied");
    scanf("%d",&n);
    while(n){
          c = c | (GETBITS(snum,p)) << i++ ;
          p++;
          n--;
    }
    printf("\n");
    binary(c);
    return 0;
}

