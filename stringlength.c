#include <stdio.h>

int stringlength(char *str)
{
	int count = 0;
	while(*str != '\0') {
		str++;
		count++;
	}
	return count;
}
