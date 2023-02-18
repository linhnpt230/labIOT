#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int *ptr=&a;
    int *pt=&b;
    printf("So thu nhat:");
    scanf("%d",ptr);
    printf("So thu hai:");
    scanf("%d",pt);
    printf("Tong 2 so la :%d",(*ptr)+(*pt));
    return 1;
}
