#include<stdio.h>
int main(void)
{
    int *a,*b;
    a=10;
    b=20;
    int c;

      c=*a;
    *a=*b;
    *b=c;


   printf(" First Pointer:\t%d\n Second Pointer:\t%d\n",a,b);

    return 0;
}
