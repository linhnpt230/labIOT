#include <stdio.h>
#include <stdlib.h>
int add(int *pnum1,int*pnum2){
    int c=*pnum1;
    *pnum1=*pnum2;
    *pnum2=c;
}
int main()
{
    int a = 1, b = 4;
    printf("Truoc khi hoan doi: a = %d; b = %d\n", a, b);
    int *pnum1 = &a, *pnum2 = &b;
    add(pnum1, pnum2);
    printf("Sau khi hoan doi: a = %d; b = %d\n", a, b);
    return 0;
}
