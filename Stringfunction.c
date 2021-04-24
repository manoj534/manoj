#include <stdio.h>

void stringinsert(char *str,char c)
{
	char *ch;
        char temp;
	char temp1;
	while (*str != '\0') {
		if (*str == c ) {
			ch = ++str ;
			temp = *str;
			while ( temp != '\0') {
				str++;
				temp1 = *str;
				*str = temp;
				temp = temp1;
			}
			str = str+1;
			*str = '\0';
			str = ch;
			*str = '$';
			str++;
		} else {
			str++;
		}
	}
}
