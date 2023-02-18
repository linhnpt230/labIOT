#include <stdio.h>
#include <stdlib.h>
// cấu trúc để tính
typedef struct
{
    int feet;
    int inch;
} distance_t;
void addDistance(distance_t dst1,distance_t dst2)
{
    distance_t  sum= {dst1.feet + dst2.feet,
                      dst1.inch+dst2.inch
                     };
    printf("Tong cua 2 khoang cach lan luot la: %d,%d\n",
           sum.feet,sum.inch);
}
int main()
{
    distance_t distance1= {12,13};
    distance_t distance2= {16,27};
    addDistance(distance1,distance2);


    return 0;
}

