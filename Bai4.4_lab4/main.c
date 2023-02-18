#include <stdio.h>
#include <stdlib.h>

int main()
{
    int so_phut;
    int so_ngay;
    scanf("%d", &so_phut);
    scanf("%d", &so_ngay);
    printf("số ngày = %d\n", (so_phut/60/24));
    printf("số năm = 4%d\n", (so_ngay/365));
    return 0;
}
