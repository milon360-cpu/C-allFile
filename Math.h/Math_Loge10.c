//Log10//
#include<stdio.h>
#include<math.h>
int main(void)
{
    double x,result;
    printf("\nPlease Enter Your Valu for Log10:\t");
    scanf("%lf",&x);

    result = log10(x);

    printf("\nThe value of Log10:\t%.2lf\n\n",result);



    return 0;
}
