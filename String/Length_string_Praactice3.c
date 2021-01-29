#include<stdio.h>
int main(void)
{
    char n[30];

    printf("Please Enter Your Name for Length:\t");
    scanf("%s",n);
    int i=0,counter=0,sum=0;
    while(n[i]!='\0')
    {
        counter++;
        i++;

    }
    sum=sum+counter;
    printf("The Length of Number:\t%d\n",sum);


    return 0;
}
