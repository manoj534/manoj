#include <stdio.h>
int strcmp1(char *,char *);

int main()
{
    char value1[10];
    char value2[10];
    int i = 0;
    int a;
    printf("enter the value1");
    scanf("%[^\n]%*c",value1);
    printf("enter value2");
    scanf("%[^\n]%*c",value2);
    while(value1[i] != '\0') {
         i++;
    }
    a = strcmp1(value1,value2);
    if ( a == i) {
       printf("same");
    } else {
       printf("diffrent");
    }
    return 0;
}
 
int strcmp1(char *value1,char *value2)
{
    int c = 0;
    while((*value2 == *value1)) {
          if ( *value1 == '\0') {
              return 0;
          }
          value1++;
          value2++;
          c++;
    } 
    return c;
}
