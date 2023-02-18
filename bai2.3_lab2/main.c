#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ten[32];// mang kieu char kich thuoc 32 phan tu
printf("What's your name: "); // in ra man hinh
scanf("%s", ten);// nhan du lieu tu ban phim
printf("Hello %s.How are you?\n", ten);//hien ra man hinh
return 0;
}
