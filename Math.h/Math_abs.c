#include<stdio.h>
#include<math.h>
int main(void)
{
   int x,result;
    printf("\nPlease Enter a Negative value:\t ");
    scanf("%d",&x);

    result = abs(x);

    printf("\nAbsolute result value :\t%d\n\n",result);


    return 0;
}
