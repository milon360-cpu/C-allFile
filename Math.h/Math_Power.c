//power //
#include<stdio.h>
#include<math.h>
int main(void)
{

    double x,y,result;
    printf("\nPlease Enter Your Main Value:\t");
    scanf("%lf",&x);
    printf("\nPlease Enter Your Power Value:\t");
    scanf("%lf",&y);

    result = pow(x,y);
    printf("Resulr of value:\t%.2lf",result);





    return 0;
}
