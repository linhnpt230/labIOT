#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i[6]= {0,2,3,4,5};
    int j[3]= {6,7,8};
    int *pt=i;
    int*ptr=j;
    int temp;
    for(int i=0; i<3; i++)
        {
            temp=*(pt+i);
            *(pt+i)=*(ptr+i);
            *(ptr+i)=temp;
        }
    printf("Mang 1 la:\n");

    for (int p = 0; p < 6; p++)
        {
            printf("%d ", *(pt + p));
        }

    printf("\nMang 2 la:\n");

    for (int p = 0; p < 3; p++)
        {
            printf("%d ", *(ptr + p));
        }
    return 0;
}
