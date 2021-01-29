#include<stdio.h>
#include<math.h>
int main(void)
{

    double n,result;
    printf("\n\nPlease Enter Your Value:\t");
    scanf("%lf",&n);

     result = exp(n);

    printf("\n Valu of Exp:\t%.2lf\n\n",result);


    return 0;
}
