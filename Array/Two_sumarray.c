#include<stdio.h>
int main(void)
{

 int a[10000],b[10000],ab[1000],i,n;
 printf("\n\nPlease Enter How Many Number:\t");
 scanf("%d",&n);

 for(i=0; i<n; i++)
 {
     printf("\n");
     printf("PLease Enter Value of A:\t");
     scanf("%d",&a[i]);
 }

 for(i=0; i<n; i++)
 {
     printf("\n");
     printf("PLease Enter Value of B:\t");
     scanf("%d",&b[i]);
 }


  for(i=0; i<n; i++)
  {
     ab[i]=a[i]+b[i];
  }
for(i=0; i<n; i++)
{
    printf("The sum of array:\t%d\n\n",ab[i]);
}


    return 0;
}
