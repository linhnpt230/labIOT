/*#include <stdio.h>
#include <stdbool.h>

int main()
{
    char string[]="thisisstring";

    char str[]="thisismystring";


    bool compare(const char s1[],const char s2[])
    {
        char*ptr=string;
        char*pt=str;
        int i =0;
        bool tf=false;
        while(*(ptr+i)==*(pt+i) && *(ptr+i) != '\0' && *(pt +i)!='\0')
            {
                i++;
            }
        if(*(ptr+i)=='\0' && *(pt+i)=='\0')
            tf=true;
        else
            tf = false;

        return tf;
    }
    printf("\n%d\n", compare(string, str));
    return 0;
}*/
#include <stdio.h>
#include <stdbool.h>

char str1[] = "nguyennt.dev";
char str2[] = "nguyennt";

bool compare()
{

    char *pnt1 = str1;
    char *pnt2 = str2;

    int i = 0;

    bool isEquals = false;

    while (*(pnt1 + i) == *(pnt2 + i) && *(pnt1 + i) != '\0' && *(pnt2 + i) != '\0')
    {
        ++i;
    }

    if (*(pnt1 + i) == '\0' && *(pnt2 + i) == '\0')
        isEquals = true;
    else
        isEquals = false;

    return isEquals;
}

int main()
{
    printf("\n%d\n", compare(str1, str2));
    return 0;
}
