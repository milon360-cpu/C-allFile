#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a[]={1,2,2,3};
int i=0;
for(i=0; i<4; i++)
{
    printf("\n\nTHe memory Address is:%u\t\n\n",&a[i]);
}



    return 0;
}
