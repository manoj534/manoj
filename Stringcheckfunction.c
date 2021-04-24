#include <stdio.h>
#include "header.h"

int stringcheck(char *string1,char *string2)
{
	char *ch ;
	int len = 0;
	int count = 0;
	ch = string2;
	while ( *string1 != '\0' ) {
		if ( *string1 == *string2 ) {
			len++;
			string1++;
			string2++;
			if ( len == stringlength(ch) ) {
				count++;
				len = 0;
				string2 = ch;
				string1++;
			}
		} else {
			string2 = ch;
			string1++;
			len = 0;
		}
	}
	if ( count > 0) {
		printf("string found\n");
		return count;
	} else {
		printf("string nout dounf");
	}
}
