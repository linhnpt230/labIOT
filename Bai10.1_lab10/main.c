#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in=9;
    float fl=2.5;
    char ch='a';
    int *i=&in;
    float *f=&fl;
    char *c=&ch;
    printf("Gia tri cua con tro float la %.1f, int la %d, char la %c.\n",*f,*i,*c);
    printf("Dia chi duoc luu trong con tro kieu float: %p,int: %p,char: %p.",f,i,c);
    return 0;
}
