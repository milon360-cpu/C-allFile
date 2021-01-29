#include<stdio.h>
int main(void)
{
int a[10000],i,sum=0,n;

printf("\n\nPleas Enter Your Value:\t");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    printf("The Value is:\t");
    scanf("%d",&a[i]);
}

for(i=0; i<10; i++)
{
    sum=sum+a[i];

}
 printf("The Sum of array number:\t%d\n\n",sum);


    return 0;
}
