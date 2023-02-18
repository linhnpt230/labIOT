#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 65;
    int b;
    do{
        printf("vui long nhap so ban doan ");
        scanf("%d", &b);
        if(b!=a)
        printf("ban nhap sai vui long nhap lai\n");
    }while(b!=a);
    printf("Ban da nhap dung");
    return 0;
}
