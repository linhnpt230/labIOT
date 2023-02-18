#include <stdio.h>
#include <stdlib.h>
#define max 1000
//nối dữ liệu 2file
int main()
{
    FILE *fr1 = fopen("test.txt", "r");
    FILE *fr2 = fopen("test2.txt", "r");
    FILE *fr3 = fopen("test3.txt", "w");
    char data[max];

    if (fr1 != NULL && fr2 != NULL)
        {
            while (fgets(data, max, fr1) != NULL)
                {
                    fputs(data, fr3);
                }
            fputs("\n", fr3);
            while (fgets(data, max, fr2) != NULL)
                {
                    fputs(data, fr3);
                }
        }

    fclose(fr1);
    fclose(fr2);
    fclose(fr3);
    return 0;
}
