#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=6,b=7;
    int *ptr=&a;
    int *pt=&b;
    int temp=*ptr;
    *ptr=*pt;
    *pt=temp;
    printf("Hai so sau khi hoan doi: %d, %d",*ptr,*pt);
    return 0;
}
