#include <stdio.h>
#include "header.h"
#include <stdlib.h>

//void stringdelete(char *,char );

int main()
{
	char *string;//[20] = "manoj kumar";
	char c ;//= 'a';
	char *ch;
	string = (char *) malloc ( sizeof(char *));
	ch = string;
	printf("enter a string");
	scanf("%[^\n]%*c",string);
	printf("enter a charecter");
	scanf("%c",&c);
	stringdelete(string,c);
	printf("%s",ch);
	return 0;
}

/*void stringdelete(char *string,char c)
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
*/			
