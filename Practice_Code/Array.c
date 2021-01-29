#include<stdio.h>
int main(void)
{
int a[50],n,i,sum=0,avg;
printf("\n\nHow many Value:\t");
scanf("%d",&n);

for(i=0; i<n; i++)
{

    printf("Number_%d:\t",i+1);
    scanf("%d",&a[i]);

}

for(i=0; i<n; i++)

{
    sum = sum+a[i];
    avg = sum/a[i];
}
printf("Sum of all elements of array = %d\n\n",sum);

printf("Average:%d\n\n",avg);



    return 0;
}
