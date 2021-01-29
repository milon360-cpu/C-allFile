#include<stdio.h>
int Factorial(int n)
{

    if(n==1)
    {
           return(1) ;
    }
    else
    {
     return (n*Factorial(n-1));
    }

}
int main(void)
{
int n;
 int result;
printf("Please Enter Your Factorial Value:\t");
scanf("%d",&n);
 result = Factorial(n);
 printf("%d",result);



    getch();
    return 0;
}
