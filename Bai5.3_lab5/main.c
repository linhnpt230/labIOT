#include <stdio.h>
#include <stdlib.h>

int main()
{
    int thoitiet;
    scanf("%d", &thoitiet);
    if(thoitiet < 0)
    {
        printf("nhiet do < 0:thoi tiet lanh cong");

    }
    else if(0<thoitiet && thoitiet<=10 )
    {
        printf("nhiệt độ 0-10: thời tiết rất lạnh.");
    }

    if(thoitiet>10 && thoitiet<=20)
    {
        printf("nhiệt độ 10-20: thời tiết lạnh.");
    }
    else if(thoitiet>20&&thoitiet<30)
    {
        printf("nhiệt độ 20-30: thời tiết tuyệt vời.");
    }
    if(thoitiet>30 &&thoitiet<40)
    {
        printf("nhiệt độ 30-40: thời tiết nóng.");
    }
    else if(thoitiet>=40)
    {
        printf("nhiệt độ >= 40: thời tiết rất nóng.");
    }
    return 0;
}
