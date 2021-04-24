#include <stdio.h>
#include "header.h"

void stringreverse(char *string)
{
	char *ch;
	int initial = 0;
	int k;
	char temp;
	int j;
	int n;
	initial = stringlength(string);
	k = 0;
	j = initial - 1;
	initial = initial/2;
	while ( initial > 0 ) {
		temp = *(string+k);
		*(string+k) = *(string+j);
		*(string+j) = temp;
		k++;
		j--;
		initial--;
	}
	initial = 0;
	k = 0;
	ch = string;
	while ( *string != '\0' ) {
		while ( *ch != ' ' && *ch != '\0') {
			ch++;
			initial++;
		}
		j = initial;
		initial = initial - 1;
		while ( k < initial ) {
			temp = *(string+k);
			*(string+k) = *(string+initial);
			*(string+initial) = temp;
			initial--;
			k++;
		}
		initial = 0;
 		k = 0;
		ch++;
		string = ch;
	}
	*(string) = '\0';

}


