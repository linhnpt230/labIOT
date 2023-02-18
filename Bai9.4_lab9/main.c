#include <stdio.h>
#include <stdlib.h>
// loai bỏ ký tự trừ bảng chữ cái
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(!((str[i]>='a'&&str<='z')||(str[i]>='A'&&str[i]<='Z')|| str[i]=='\0'))
        {
            for(int j=i; str[j]!='\0'; j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("%s",str);
    return 0;
}
