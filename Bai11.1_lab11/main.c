#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[]="thisisstring";
    char*ptr=string;
    int i=0;
    while(*(ptr+i)!='\0')
        {
            i++;
        }
    i--;
    for(int j=i; j>=0; j--)
        {
            printf("%c",ptr[j]);
        }
    printf("\n");

    return 0;
}

