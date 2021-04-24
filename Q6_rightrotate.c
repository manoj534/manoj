#include <stdio.h>
#include "Validate.h"

unsigned int right_rotate_bits(unsigned int value,unsigned int position);

int main()
{
   unsigned int value ;
   unsigned int position;
   int i=31;
   int mask;
   printf("enter a value");
   scanf("%d", &value);
   printf("enter a value");
   scanf("%d", &position);
  // mask = value - position;
   binary(value);
   printf("\n");
   mask = right_rotate_bits(value,position);
   binary(mask);
   return 0;
}

unsigned int right_rotate_bits(unsigned int value,unsigned position)
{   
   while (position) {
           value = ( ( value & 1) << 31 ) | ( value >> 1 );
           position--;
   }
   return value;

}
