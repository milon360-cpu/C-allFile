#include<stdio.h>
#include<math.h>
int main(void)
{
double n,result;
printf("\n\nPlease Enter Your value For Round:\t");
scanf("%lf",&n);

result = trunc(n);

printf("Vlaue of result:\t%.2lf\n\n",result);




    return 0;
}
