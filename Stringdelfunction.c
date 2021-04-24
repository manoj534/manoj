#include <stdio.h>

void stringdelete(char *string,char c)
{
	char *ch;
	while ( *string != '\0' ) {
		if ( *string == c ) {
			ch = string;
			while ( *string != '\0') {
				*string = *(string+1);
			        string++;
	        	} 
			*string = '\0';
			string = ch;
		} else {
			string++;
		}
	}
}
	
