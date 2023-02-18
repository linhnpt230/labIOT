#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=51;
    int*ptr=&a;
    printf("gia tri ban dau: %d\n",a);
    *ptr=6;
    printf("gia tri sau khi thay doi cua a: %d ",*ptr);
    return 0;
}
//co thay doi thanh gia tri khac
