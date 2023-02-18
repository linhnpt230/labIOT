#include <stdio.h>
#include <stdlib.h>
#define YEARS 5
#define MONTHS 10

int main()
{
   float rain[YEARS][MONTHS] = {
   {4.3,4.3,4.3,3.2,3.2,3.2,2.3,2.3,4.6,4.6},
   {5.5,5.5,5.5,2.2,2.1,2.2,4.3,4.6,7.8,7.6},
   {4.5,4.5,4.5,4.5,4.6,4.6,4.6,4.7,4.8,7.8},
   {5.5,5.5,5.5,2.2,2.1,2.2,4.3,4.6,7.8,7.6},
   {4.5,4.5,4.5,4.5,4.6,4.6,4.6,4.7,4.8,7.8},
   };
   int year;
   int t;
   int month;
   float arr;
   for(year = 0, t =0;year < YEARS;year++){
   		arr += rain[year][month];
   }

   printf("%5d \t%15.1f\n", 2010+year, arr);
   t+=arr;

	for( month = 0; month<MONTHS; month++)
	    arr+=rain[year][month];

	printf("%4.1f ", t/YEARS);
    return 0;
}
