#include<stdio.h>
int main(void)
{
int a[10],b[20],sum=0;

printf("\n\nPlease Enter A first valu for sum: ");
scanf("%d",&a);
printf("\n\nPlease Enter A Second valu for sum: ");
scanf("%d",&b);

int *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
 sum = *ptr1+*ptr2;

 printf("Sum of Two Number:\t%d\n\n",sum);




    return 0;
}
