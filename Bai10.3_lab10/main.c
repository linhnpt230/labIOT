#include <stdio.h>
#include <stdlib.h>
// tìm số lớn nhất trong 2 số
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *ptr=&a;
    int *pt=&b;
    if(*ptr>*pt)
        {
            printf("So %d lon nhat trong 2 so ",*ptr);
        }
    else if(*pt>*ptr)
        {
            printf("So %d lon nhat trong 2 so",*pt);
        }
    else
        {
            printf("Hai so bang nhau");
        }

    return 0;
}
