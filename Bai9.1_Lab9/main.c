#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
int stringlenght()
{
    char String[]="thisisstring";
    int i=0;
    while(String[i]!='\0')
        {
            i++;
        }
    printf("Do dai cua chuoi %s la:%d",String,i);
}
int noichuoi()
{
    char s1[10] = "Thisis";
    char s2[] = "mystring";

    int i, j, n1, n2;

    n1 = strlen(s1);
    n2 = strlen(s2);

    j=0;
    for(i = n1; i<n1+n2; i++ )
        {
            s1[i] = s2[j];
            j++;
        }

    s1[i] = '\0';

    printf("\nKet qua sau khi noi chuoi la:\n");
    printf("%s", s1);
}

int main()
{
    stringlenght();
    noichuoi();

    return 0;
}



