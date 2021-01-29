#include<stdio.h>
#include<string.h>
int main(void)
{
 char n[45],i[50];

 printf("\n");

 printf("Please Enter a Single word for copy:\t");
 scanf("%s",n);
 printf("Please Enter another a Single word for copy:\t");
 scanf("%s",i);

 strcpy(n,i);

 printf("THe word is:\t%s\n",n);
 printf("THe word is:\t%s\n",i);




    return  0;
}
