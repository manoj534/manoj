#include <stdio.h>
#include <stdlib.h>

void strcat1(char *,char *);
char* strrev1(char *);
int  len(char *);

int main()
{
    char value1[100] = "hello";
    char value2[100] = "hiii";
    char *ch1;
    ch1 = value1;
    int n;
    char *cha;
    printf("enter 1 .concatination \n 2.string reverse\n 6.exit");
    scanf("%d",&n);
    switch (n) {
           case 1 :
                   printf("string concatination");
                   strcat1(ch1, value2);
                   printf("%s\n",ch1);
                   printf("%s\n",value2);
                   break;
           case 2 :
                  printf("string reverse");
                  cha = strrev1(value2);
                  printf("%s",cha);
                  break;
          default :
                  exit(0);
     }
              
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

char* strrev1(char *value1)
{
      printf("hi");
      char *ch1;
      int i;
      i = 4;
      printf("%d",i);
      while ( i >= 0) {
            *ch1 = *value1;
            i--;
            ch1++;
            value1++;
      }
      *ch1 = '\0';
      return ch1;
}

















