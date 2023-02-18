#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Text = fopen("test.txt", "w");

    char d;

    printf("\n Xin vui long nhap thong tin:\n");


    scanf("%c", &d);

    fprintf(Text, "%c", d);

    fclose(Text);


    return 0;
}
