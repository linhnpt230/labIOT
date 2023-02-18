#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    i=i>>2;// dịch sang bit thứ 3
    i=i&1;// nếu bit được dịch là 1 sẽ trả về 1 còn ngược lại sẽtrar về 0
    printf("%d",i);
    return 0;
}
