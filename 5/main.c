#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sh[10]="thisiss";
   char*prt=&sh;
   printf("%s",*prt);
    return 0;
}
