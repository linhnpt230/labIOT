#include <stdio.h>
#include <stdlib.h>
void findFact(int n,int*f)
{
    int i;
    *f=1;
    for(i=1; i<=n; i++)
        *f=*f * i;
}
int main()
{
    int n;
    int f;
    printf("Nhap so: ");
    scanf("%d",&n);
    findFact(n, &f);
    printf("\nGiai thua cua so %d la: %d", n, f);
    return 0;
}
