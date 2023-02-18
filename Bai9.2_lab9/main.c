#include <stdio.h>
#include <stdlib.h>
//sắp xếp chuỗi bằng toán nổi bọt

int main()
{
    char s[2][4];
    char t[20];
    int i, j;
    int size = 2;

    printf("\nNhap 4 chuoi bat ky: \n");
    for (i = 0; i < size; i++)
        {
            scanf("%s", s[i]);
        }
    // sap xep chuoi
    for (i = 1; i < size; i++)
        {
            for (j = 1; j < size; j++)
                {
                    if (strcmp(s[j - 1], s[j]) > 0)
                        {
                            strcpy(t, s[j - 1]);
                            strcpy(s[j - 1], s[j]);
                            strcpy(s[j], t);
                        }
                }
        }

    printf("\nSap xep thu tu cua cac chuoi:");
    for (i = 0; i < size; i++)
        {
            printf("\n%s", s[i]);
        }
    return 0;
}
