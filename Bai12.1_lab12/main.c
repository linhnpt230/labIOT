#include <stdio.h>
#include <stdlib.h>
//thông tin nhân viên
typedef struct nhanvien
{
    char ten[30];
    int id;
    float luong;
}x;
int main()
{
    x n;
    printf("Nhap ten nhan vien: ");
    scanf("%s",&n.ten);
    printf("Nhap id cua nhan vien: ");
    scanf("%d",&n.id);
    printf("Nhap luong cua nhan vien: ");
    scanf("%f",&n.luong);

    printf("Thong tin chi tiet\n\n");
    printf("Ten nhan vien: %s\n",n.ten);
    printf("ID cua nhan vien: %d\n",(int)n.id);
    printf("Luong cua nhan vien: %f",n.luong);


    return 0;
}
