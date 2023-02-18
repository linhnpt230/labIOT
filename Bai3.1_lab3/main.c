#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chieudai = 3.3;
    float chieurong = 1.23;
    double chuvi;
    double dientich;
    chuvi = 2*(chieudai+chieurong);
    dientich = chieudai * chieurong;
    printf("chu vi cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la %.41f\n", chieudai, chieurong, chuvi);
    printf("Dien tich cua hinh chu nhat co chieu dai %.2f va chieu rong %.f la %.41f", chieudai, chieurong, dientich);
    return 0;
}

