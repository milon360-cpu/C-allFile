#include<stdio.h>
int main(void)
{
    int a[50],b[50],i,n;
    printf("\n\nHow many Number:\t");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Please Enter Your Value_%d:\t",i+1);
        scanf("%d",&a[i]);
    }
     printf("\n\nArray1: ");
     for(i=0; i<n; i++)
     {
         printf("%d ",a[i]);
     }
for(i=0; i<n; i++)
 {
     b[i]=a[i];
 }

printf("\n\nArray2: ");
     for(i=0; i<n; i++)
     {
         printf("%d ",b[i]);
     }


    return 0;
}
