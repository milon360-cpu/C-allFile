#include<stdio.h>
int main(void)
{
 int a[50],i,sum=0,n;
 printf("\n\n How many dou you want for sum:\t");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
     printf("The value is %d:\t",i+1);
     scanf("%d",&a[i]);
      sum = sum+a[i];
 }

  printf("The sum of Number:\t%d\n\n",sum);


    return 0;
}
