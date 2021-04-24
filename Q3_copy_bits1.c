#include <stdio.h>
#include "Validate.h"

unsigned int copy_bits(unsigned int snum,unsigned int dnum,
                       unsigned int s,unsigned int d,unsigned int n)
{
    snum = snum >> ((s - n)+1);
    snum = snum << ((s - n ) + 1);
    snum = snum << ( 31 - s );
    snum = snum >> ( 31 - s);
    
    if ( d > s ) {
       snum = snum << ( d - s);
    } else {
       snum = snum >> ( s - d);
    }
    binary(snum);
    printf("\n");
    dnum = (dnum & ~( (0xffffffff << (( d - n) +1 ) ) & ( 0xffffffff >> (31 - d))));
    binary(dnum);
    printf("\n");

    dnum = dnum | snum;
    binary(dnum);
    return 0;
}
