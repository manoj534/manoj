#include <stdio.h>
	char *name;
#include <stdlib.h>

struct employee
{
	
	char *name;
	int empid;
	int salary;
	int phonenum;
}emp;

int main(int argc,char *argv[])
{
	FILE *fp;
	FILE *fp2;
	int c = 1;
	char *str;
	int size;
	str = (char *)malloc(sizeof(char)*10);
	fp = fopen("employee.txt","ar+");
	fp2 = fopen("employee2","w+");
	while ( c < argc ) {
		str = argv[c];
		for ( size = 0; str[size]!= '\0';size++);
		fwrite(str,size,1,fp);
		printf("hi");
		c++;
	}
	fclose(fp);
	return 0;
}
		
	
