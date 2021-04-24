#include <stdio.h>
#include <stdlib.h>

int Stringcount(char *,char *);
int length(char *);
int compare(char *,char *);


int main()
{
	char string1[] =  "manoj kumar";
	char string2[] =  " kumarmanoj";
	char *ch;
//	ch = string2;
	int ch1;
//	string1 = (char *)malloc(sizeof(char *));
//	string2 = (char *)malloc(sizeof(char *));
//	printf("enter string");
//	scanf("%[^\n]%*c",string1);
//	printf("enter second string to rotate count");
//	scanf("%[^\n]%*c",string2);
//	scanf("%[",string1);
//	scanf("%s",string2);
	ch = string1;
	ch1 = Stringcount(string1,string2);
	if ( ch1 > 0 && ch1 < length(string1)) {
		printf("number of rotations %d",ch1);
	} else {
		printf("incorrect strings");
	}
	printf("%s \t %s",string1,ch);
	return 0;
}

int Stringcount(char *string1,char *string2)
{
	int count = 0;
	char *ch;
	char temp;
	ch = string2;
	int n = 10;
        if ( length(string1) == length(string2) ) {
		while ( 1 ) {
			if ( compare(string1,string2) > 0 ) {
				break;
			} else {
				temp = *string2;
				ch = string2;
				ch++;
				while ( *ch != '\0' ) {
					*(ch - 1 ) = *ch;
					ch++;
				}
				*(ch-1) = temp;
				ch = string2;
				count++;
			}
			
		}
		return count;
    		
	} else {
		return -1;
	}
}



int length(char *string) 
{
	int i = 0;
	while ( *string != '\0' ) {
		string++;
		i++;
	}
	return i;
}


int compare(char *string1,char *string2) 
{
	int count = 0;
	while( *string1 == *string2 ) {
		string1++;
		string2++;
		count++;
	}
 	if ( count == length(string1)+1) {
		return 1;
	} else {
		return -1;
	}
}

				
