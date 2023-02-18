#include <stdio.h>
#include <stdlib.h>
int Inmang(int a[],int n)
{
    for(int i =0; i<n; i++)
    {
        printf("So phan tu da nhap %d\n",a[i]);
    }// ý 4
    FILE *ptr=fopen("file2.txt","w");
    for(int i=0; i<n; i++)
    {
        fprintf(ptr,"Gia tri cua phan tu %d la: ",i);
        fprintf(ptr,"%d\n",a[i]);
    }
    fclose(ptr);
}
int main()
{
     //ý 1
    char c[30];
    fgets(c,sizeof(c),stdin);
    printf("Xin chao ");
    puts(c);
    //ý 2
    int n;
    int aray[n];
    scanf("%d",&n);
    for(int i=0; i < n; i++)
    {
        printf("Nhap ki tu thu %d cua mang:",i);
        scanf("%d",&aray[i]);
        // printf("%d\n",aray[i]);
    }
    /* ý 3*/ Inmang(aray,n);

    return 0;

}
