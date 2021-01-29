#include<stdio.h>
#include<string.h>
int main(void)
{
 char n[50];
 int i;

 printf("\n");
 printf("Please Enter Your Name For check name Length:\t");
gets(n);

 i = strlen(n);
 printf("The Length of name:\t%d\n\n",i);




    return 0;
}
