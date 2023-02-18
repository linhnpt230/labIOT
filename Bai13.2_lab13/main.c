#include <stdio.h>
#include <stdlib.h>
#define max 10000
int main()
{
FILE *read = fopen("test.txt", "r");
    char str[max];
     if (read != NULL)
    {
        while (fgets(str, max, read) != NULL)
        {
            printf("%s", str);
        }
    }
    fclose(read);
    return 0;
}
