#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main()
{
	char *str;// = "manoj kumar";
	char c ;//= 'a';
        char *ch;
	//ch = str;
	str =(char *)malloc(sizeof(char ));
	ch = str;
	printf("enter a string");
	scanf("%[^\n]%*c",str);
	printf("enter a charecter");
	scanf("%c",&c);
	stringinsert(str,c);
	printf("%s",ch);
	free(str);
	return 0;
}


