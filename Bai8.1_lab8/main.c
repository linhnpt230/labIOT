#include <stdio.h>
#include <math.h>
int pro();
int UCLN(int a, int b)
{
    int r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
//Ham tinh gia tri tuyet doi
float giatrituyetdoi(float x)
{
    if(x<0)
    {
        return -x;
    }
    return x;
}

//Ham tinh n!
long giaithua(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*giaithua(n-1);
    }
}

float khoangcach(float Ax,float Ay,float Bx,float By)
{
    return sqrt((Ax-Bx)*(Ax-Bx)*(Ay-By)*(Ay-By));
}
int main()
{
    int a,b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));
    /*------------------------------------------------------------------*/

    int x;
    printf("Nhap so muon tim gia tri tuyet doi: ");
    scanf("%d", &x);
    printf("Gia tri tuyet doi cua %d la:%f\n ",x,giatrituyetdoi(x));
    /*------------------------------------------------------------------*/
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Giai thua %d la: %d\n", n,giaithua(n));
    /*------------------------------------------------------------------*/
    float Ax, Ay, Bx,By;
    printf("Nhap Ax: ");
    scanf("%f", &Ax);
    printf("Nhap Ay: ");
    scanf("%f", &Ay);
    printf("Nhap Bx: ");
    scanf("%f", &Bx);
    printf("Nhap By: ");
    scanf("%f", &By);
    printf("Khoảng cách giữa 2 điểm A(Ax,Ay) va B(Bx,By) la: %f", khoangcach(Ax,Ay,Bx,By));
}
