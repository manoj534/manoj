#include <stdio.h>
#include <stdlib.h>

void strcpy1(char *,char *);

int main()
{
    /*char a[] = "manoj kumar";
    char *p;
    p = "kumar manoj";
    a[2] = 'j';
   // p[2] = 'k';
    printf("%s\n",a);
    printf("%s",*p);*/
    char a[] = "manoj kumar";
    char *b;
    int i = 0;
    int c = 0;
    while (a[i] != '\0') {
          c++;
    }
    b = (char *)malloc( (sizeof(char *)));
    /*while ((*b = *a) != '\0') {
        a++;
        b++;
    }*/
    strcpy1(&a,&b);
    printf("%s",b);
    
    return 0;
}

void strcpy1(char *a,char *b)
{
    while ((*b = *a) != '\0') {
        a++;
        b++;
    }
   
} 
