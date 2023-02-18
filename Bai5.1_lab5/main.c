#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);

    if((a != (int)a)|| (b != (int)b))
    {
        printf("so nhap vao khong phai so nguyen\n");
    }
    if(a == b)
    {
        printf("so thu nhat bang so thu hai");
    }
    else if(a > b)
    {
        printf("so thu nhat lon hon so thu hai");
    }
    else
    {
        printf("so thu nhat nho hon so thu hai");
    }
}


