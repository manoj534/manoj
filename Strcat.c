#include "stdio.h"
#include "stdlib.h"

void strcat1(char *,char *);
char* strrev1(char *);
int  len(char *);

int main()
{
    char value1[10] = "hello";
    char value2[10] = "hiii";
    char *ch1;
    ch1 = value1;
    int n;
	char str[10];
    char *cha;


    puts("enter 1 .concatination \n 2.string reverse\n 6.exit");
    fgets(str, 10, stdin);
	n = atoi(str); 
    printf("%d",n);
    switch (n) {
           case  1:
                 printf("string concatination");
                 strcat1(ch1, value2);
                 printf("%s\n",ch1);
                 printf("%s\n",value2);
                 break;
           case 2:
                printf("string reverse");
                cha = strrev1(value2);
                printf("%s",cha);
                break;
           default :
                  exit(0);
     }
          return 0;
}


int len(char *len)
{
    int i = 0;
    while((*len) != '\0') {
          i++;
          len++;
    }
    printf("%d",i);
    return i;
}
          

void strcat1(char *value1,char *value2)
{
    while(*value1 != '\0') {
         value1++;
         
    }
    while (*value2 != '\0') {
          *value1 = *value2;
           value2++;
           value1++;
    }
    *value1 = '\0';
    
}

char* strrev1(char *value2)
{
      printf("hi");
      char *ch1;
      int i;
      i = len(value2);
      printf("%d",i);
      while ( i >= 0) {
            *ch1 = *(value2-i);
            i--;
            ch1++;
            value2++;
      }
      *ch1 = '\0';
      return ch1;
}

















