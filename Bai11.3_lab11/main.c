#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("so luong phan tu cua mang");
    scanf("%d",&n);
    int array[n];
    int *ptr = array;
    int max = *ptr;

   / for (i = 0; i < n; i++) {
        printf("Xin vui long nhap phan tu thu %d: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (max < *(ptr+ i)) {
            max = *(ptr + i);
        }
    }

    printf("=> Phan tu lon nhat la %d", max);

    return 0;
}

