#include <stdio.h>
#include <stdlib.h>
#define max 10000
int main()
{
    FILE*ptr=fopen("test.txt","w");
    int count=0;
    int i[max];
    if (ptr != NULL)
        {
            while (fgets(i, max, ptr) != NULL)
                {
                    count++;
                    // printf("%s", data);
                }
        }
    printf("Tong so dong la: %d", count);

    fclose(ptr);


    return 0;
}
