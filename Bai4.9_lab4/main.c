#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int id;
       unsigned int time;
          unsigned int money;
             unsigned int mmonth;
             scanf("%u", &id);
             scanf("%u", &time);
             scanf("%u", &money);
             printf("tiền lương = %u", (time * money));
    return 0;
}
