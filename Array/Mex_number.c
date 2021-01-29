#include<stdio.h>
int main(void)
{
    int a[50],i,n;
    printf("\n\n How many Number:\t");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n\nPlease Enter Your Value_%d:\t",i+1);
        scanf("%d",&a[i]);
    }
    int min;
    min=0;
     for(i=0; i<=n; i++)
     {
         if(a[i]<max)
         max=a[i];
     }
     printf("\n\nThe Meximum Numer is:\t%d\n\n",min);


    return 0;
}
