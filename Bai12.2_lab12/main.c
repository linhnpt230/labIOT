#include <stdio.h>
#include <stdlib.h>
// thêm ngày sinh
struct ngaysinh
{
    int ngay,thang;
};
struct nhanvien
{
    char ten[30];
    int id;
    float luong;
    struct ngaysinh ns;
};
int main()
{
    struct nhanvien n;
    printf("Nhap ten nhan vien: ");
    scanf("%s",&n.ten);
    printf("Nhap id cua nhan vien: ");
    scanf("%d",&n.id);
    printf("Nhap luong cua nhan vien: ");
    scanf("%f",&n.luong);
    printf("Ngay sinh cua nhan vien: ");
    scanf("%d",&n.ns.ngay);
    printf("Thang sinh cua nhan vien: ");
    scanf("%d",&n.ns.thang);

    printf("\n\nThong tin chi tiet\n\n");
    printf("Ten nhan vien: %s\n",n.ten);
    printf("ID cua nhan vien: %d\n",n.id);
    printf("Luong cua nhan vien: %f\n",n.luong);
    printf("Ngay sinh cua nhan vien: %d\n",n.ns.ngay);
    printf("Thang sinh cua nhan vien: %d",n.ns.thang);


    return 0;
}
