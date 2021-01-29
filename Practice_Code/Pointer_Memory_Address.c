#include<stdio.h>
int main(void)
{
int x=5;
int *p;
p = &x;

printf("\n\n The value is:\t%d\n\n",x);
printf("The Memory Address Is:\t%x\n\n",&x);
printf("Address of p:\t%x\n\n",p);
printf("Address of Pointer:\t%x\n\n",*p);
printf("Address of vsriable:\t\n\n",&*p);




    return 0;
}
