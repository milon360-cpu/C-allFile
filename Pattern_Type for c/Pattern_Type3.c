#include<stdio.h>
int main(void)
{
   int n,row,col;
   printf("Please Enter Your Number For Character Pattern:\t");
   scanf("%d",&n);

   for(row=1; row<=n; row++)
   {
       for(col=1; col<=row; col++)
       {
           printf("%c ",col+64);
       }
       printf("\n");
   }


    return 0;
}
