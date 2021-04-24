#include <stdio.h>

void strncat1(char *,char *,int );

int main()
{
	char var1[10] = "manoj";
	char var2[10] = "kumar";
	int n;
        char *ch;
        ch = var1;
	printf("enter number of charecters to concatinate");
	scanf("%d",&n);
	strncat1(ch,var2,n);
        printf("%s",var1);
	return 0;
}
 
void strncat1(char *var1,char *var2,int n)
{
	  while (*(var1) != '\0') {
                var1++;
 	  }
	  while ( n > 0) {
    	        *var1++ = *var2++;
                 n--;
          }
          *var1 = '\0';
}
