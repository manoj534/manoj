#include <stdio.h>
#include "Validate.h"

unsigned int copy_bits(unsigned int snum,unsigned int dnum,unsigned int s,
                       unsigned int d,unsigned int n);

int main() 
{
    unsigned int snum;
    unsigned int dnum;
    unsigned int s;
    unsigned int d;
    unsigned int n;
    unsigned int c;
    printf("enter the first number");
    scanf("%d",&snum);
    binary(snum);
    printf("\nenter the second number");
    scanf("%d",&dnum);
    binary(dnum);
    printf("enter the first value position");
    scanf("%d",&s);
    printf("enter the second value position");
    scanf("%d",&d);
    printf("enter the bits value");
    scanf("%d",&n);
    c = copy_bits(snum,dnum,s,d,n);
    binary(c);
    return 0;
}

unsigned int copy_bits(unsigned int snum, unsigned int dnum, unsigned int s,
                       unsigned int d, unsigned int n)
{
       int c = 0;
       int n1 = n;
       int temp;
       while ( n1 ) {
            temp = snum ;
            c = (c | (( temp >> s ) & 1 ) ) << 1;
            printf("%d\t",c);
            s--;
            n1--;
       }
       printf("%d\n",c);
      while ( n ) {

             if ( !((( dnum >> d) & 1) & ( ( c >> n ) & 1  )  ) ){
                   if ( ((dnum >> d ) & 1) | ( (c >> n  ) & 1) ) {
                        dnum = dnum ^ ( 1 >> d -1 );
                        n = n - 1;
                   } else {
                        n = n - 1;
                   }
              } else {
                     n = n - 1;
              }
        }
        return dnum;
}
                     







        
