#include <stdio.h>


int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &c);
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Đổi số ngày sang số năm = %d\n", (c/365));
    printf ("Đổi số ngày sang số tuần = %d\n", ((c - a * 365)/7));
    printf(" số ngày = %d\n", (c - a * 365 - b * 7));

    return 0;
}
