#include<stdio.h>
int main(void)
{


int a[10],b[20],ptr3;

printf("\n\nPlease Enter A first valu for sum: ");
scanf("%d",&a);
printf("\n\nPlease Enter A Second valu for sum: ");
scanf("%d",&b);
printf("\n\n Befor Swaping\n\n");
printf("Valu of First: %d\n",*ptr1);
printf("Valu of First: %d\n",*ptr2);

//int a=20, b=30, ptr3;
int *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;

//swaping
  ptr3 = *ptr1;
*ptr1 = *ptr2;
*ptr2 = ptr3;

printf("\n\n After Swaping\n\n");
printf("Valu of First a: %d\n",*ptr1);
printf("Valu of First b: %d\n",*ptr2);

    return 0;
}
