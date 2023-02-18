#include <stdio.h>
#define PAYRATE  12.00//12$/hour
#define TAXRATE_300  0.15//15%
#define TAXRATE_150  0.20//20%
#define TAXRATE_REST  0.25 //25%
#define OVERTIME      40//hour


int main()
{unsigned int hours = 0;

    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
    scanf("%u %lf %lf %lf",&hours, &grossPay, &taxes, &netPay);
    if(hours <= 40){grossPay = hours * PAYRATE;
    }
    else
    {
        grossPay = 40 *PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }
    if(grossPay <=300)
{
    taxes = grossPay * TAXRATE_300;
} else if(grossPay > 300 && grossPay <=450){
taxes = 300* TAXRATE_300;
taxes +=(grossPay - 300) * TAXRATE_150;}
else if(grossPay > 450){
    taxes = 300 * TAXRATE_300;
    taxes += 150 * TAXRATE_150;
    taxes += (grossPay - 450) * TAXRATE_REST;

} netPay = grossPay - taxes;
printf("Your gross pay this week is: %.2lf\n", grossPay);
printf("Your taxes this week is: %.2lf\n", taxes);
printf("Your net pay this week is: %.2lf\n", netPay);    return 0;
}
