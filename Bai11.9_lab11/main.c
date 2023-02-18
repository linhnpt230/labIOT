#include <stdio.h>
#include <stdlib.h>

int main()
{ char json[]="{\"hoten\":\"Le Thi My Duyen\,\"gioitinh\":\"nu\",\"sodienthoai\":\"0935777888\",\"email\":\"duyen860@gmail.com\"}";

    char hoten[100],gioitinh[100],email[100];
    char sodienthoai[100];
JsonExtract(json,hoten,gioitinh,email,sodienthoai);
    printf("Thong tin doi tuong JSON:\n");
    printf("Ho ten: %s",hoten);
    printf("Gioi tinh: %s",gioitinh);
    printf("Dien thoai: %s",sodienthoai);
    printf("Email: %s",email);
    return 0;
}
void JsonExtract(char json[],char hoten[],char gioitinh[],char sodienthoai[],char email[])
{
    char info[4][100];
    int i;
    char *token=strtok(json,",");
    i =0;
    while(token!=NULL)
        {

            strcpy(info[i],token);
            i++;
            token=strtok(NULL,",");
        }
    char *hoten_token=strtok(info[0],":");
    strcpy(hoten,strtok(NULL,":"));
    token=strtok(NULL,",");
    char* gioitinh_token=strtok(info[1],":");
    strcpy(gioitinh,strtok(NULL,":"));
    token=strtok(NULL,",");

    char* sodienthoai_token=strtok(info[2],":");
    strcpy(sodienthoai,strtok(NULL,":"));
    token=strtok(NULL,",");

    char* email_token=strtok(info[3],":");
    strcpy(email,strtok(NULL,":"));
    if(email[strlen(email)-1]=='}')
        email[strlen(email)-1]='\0';}

