
#include<stdio.h>
int main(void)
{
 int n,row,col;
 printf("Please Enter Your Number For Pattern:\t");
 scanf("%d",&n);
 for(row=1; row<=n; row++)
 {
     for(col=1; col<=n; col++)

        printf("*",col);

        printf("\n");
 }






    return 0;
}
