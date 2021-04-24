#include <stdio.h>
#include "Validate.h"
unsigned int left_rotate_bits(unsigned int num, unsigned int n);

int main()
{
    int num;
    int n;
    int temp;
    int i = 31;
    int a;
    printf("enter a value");
    scanf("%d",&num);
    printf("enter the rotation value");
    scanf("%d",&n);
    binary(num);
    printf("\n");
    a = left_rotate_bits(num,n);
    binary(a);
    return 0;

}



unsigned int left_rotate_bits(unsigned int num,unsigned int n)
{

    int i = 31;
    int temp;
    while ( n ) {
          temp = num ;
          num = (((temp >> i) & 1)|(num << 1));
          n--;
    }
    return num;

}
 
