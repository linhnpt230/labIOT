#include <stdio.h>



int main()
{
    int arr[20];
    arr[0] = 2;
    arr[1] = 3;
    int ar = 2;
    int count = 0;
    for(int i = 0; i<=100; i++)
    {
        if(i%2 !=0)
        {
            for(int j =2; j<i; j++)
            {
                if(i%j ==0)
                {
                    count++;
                }
            }
            if(count == 0)
            {
                printf("%d ", i);
            }
            count = 0;
        }
    }

    return 0;
}

