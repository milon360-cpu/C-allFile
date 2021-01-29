#include<stdio.h>
int main(void)
{
    int a[1000],n,i,sum_even=0,sum_odd=0;
    printf("\n\nPlease Enter How Man Number:\t");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("value _%d:\t",i+1);
        scanf("%d",&a[i]);
    }

      printf("The value of array:\t");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);



         if(a[i]%2==0)
            sum_even = sum_even+a[i];
         else
            sum_odd= sum_odd+a[i];

     }

     printf("\nThe sum of even Number:\t%d\n\n",sum_even);
     printf("\nThe sum of odd Number:\t%d\n\n",sum_odd);


    return 0;
}
