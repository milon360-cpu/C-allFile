#include<stdio.h>
#include<string.h>
int main(void)
{
 char a[50],b[50],c[50];
 printf("\n\nPlease Enter a word for swapping:\t");
 gets(a);

 printf("\nPlease Enter Word:\t ");
 gets(b);

 printf("\n \t\t\tBefor Swapping\t\t\n\n");
 printf("\nThe first word is:\t%s\n\n",a);
 printf("\nThe first word is:\t%s\n\n\n",b);

 c= a;
 a= b;
 b= c;

printf("\n \t\t\tAfter Swapping\t\t\n\n");
 printf("\nThe first word is:\t%s\n\n",a);
 printf("\nThe first word is:\t%s\n\n",b);




    return 0;
}
