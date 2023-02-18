#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[101];
int n;
 do{
   printf("Xin vui long nhap so luong phan tu: ");
   scanf("%d", &n);
 if(n<0){printf("So luong phan tu khong hop le.\n");}
   }
   while(n < 0);
printf("Xin vui long nhap %d phan tu cho mang;\n",n);
 for(int i = 0; i< n; i++){
      printf("Nhap arr[%d]= ",i);
       scanf("%d", &arr[i]);
}int s;
 for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            s = arr[i];
            arr[i] =arr[j];
            arr[j] = s;

        }
    }
 } printf("\nMang theo thu tu giam dan la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){

                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }


    printf("\nMang theo thu tu tang dan la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }

    return 0;
}
