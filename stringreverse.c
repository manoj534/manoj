#include <stdio.h>
#include "header.h"
#include <stdlib.h>
int main()
{
	char *str;
	char *ch;
	int a;
	str = (char *) malloc ( sizeof(char *));
	ch = str;
	printf("enter a string");
	scanf("%[^\n]%*c",str);
	a = stringlength(str);
        stringreverse(str);
	printf("%s",ch);
	free(str);
	return 0;
}


