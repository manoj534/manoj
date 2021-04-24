#include <stdio.h>
#include "header.h"
#include <stdlib.h>


int main()
{
	char *string1;  //first string varaible
	char *string2; // second string variable
	int len1;
	int len2;
	int a;
	printf("hii");
	string1 =(char *)malloc(sizeof(char *)); // allocationg memeory 
	string2 = (char *)malloc(sizeof(char *));// allocating memory
	printf("enter a string");
	scanf("%[^\n]%*c",string1);//reading input from terminal
	printf("enter a sub string");
	scanf("%[^\n]%*c",string2); // readin input from terminal
	len1 = stringlength(string1); // finding length of first string
	len2 = stringlength(string2);// finding the length of the second string
	if ( len1 >= len2 ) { // comparing the length of first and second string
	        a =  stringcheck(string1,string2); /* if the lenght of first 
							string is greater than 
							second string call the function*/
        	printf("count %d",a);
	} else {
		printf("vlues are not match");
	}
	free(string1);
	free(string2);
	return 0;
}


