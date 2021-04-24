#include <stdio.h>

char strcpy1(char *,char *);

int main()
{
    char a[10] = "manoj kum";
    char p[10];
    strcpy1(a,p);
    printf("%s",p);
    return 0;
}

char strcpy1(char *a,char *p)
{
     while ((*p = *a) != '\0') {
            p++;
            a++;
     }
}
  
