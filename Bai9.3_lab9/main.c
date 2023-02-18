#include <stdio.h>
#include <stdbool.h>
// kiểm tra chuỗi con có nằm trong chuỗi k
int main()
{
    char str[50],str2[50];
    int c1=0,c2=0;
    bool f;
    printf("Chuoi thu nhat: ");
    scanf("%s",str);
    printf("Chuoi thu hai: ");
    scanf("%s",str2);
    while(str[c1] !='\0')
        {
            c1++;
        }
    c1--;
    while(str2[c2]!='\0')
        {
            c2++;
        }
    c2--;
    for(int i =0; i<=c1-c2; i++)
        {
            for(int j = i; j<i+c2; j++)
                {
                    f=true;
                    if(str[j]!=str2[j-i])
                        {
                            f=true;
                            break;
                        }
                }
            if(f=true)break;
        }
    if(f=true)
        {
            printf("Chuoi con xuat hien trong chuoi");
        }
    else
        {
            printf("Chuoi con ko xuat hien trong chuoi");
        }
    return 0;
}
