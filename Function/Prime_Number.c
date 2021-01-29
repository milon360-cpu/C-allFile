#include<stdio.h>
int main(void)
{
 int n,i,k;
 printf("\nPlease Enter a Value for Check:\t");
 scanf("%d",&n);

 for(i=1; i<=n; i++)
 {
     if(n%i==0)
       {
         k++;
       }
 }
 if(k==2)
 {
     printf("\n%d is the prime Number:\t",n);
 }
 else{

    printf("\n%d in not prime",n);
 }




    return 0;
}
