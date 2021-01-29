#include<stdio.h>
int main(void)
{
    int n,row,col;
    printf("\n\nPlease Enter Your Value for Pattern:\t");
    scanf("%d",&n);
     for(row=1; row<=n; row++)
     {
         for(col=1; col<=n-row; col++)
            printf(" ");
         for(col=1; col<=row; col++)
         {
             printf("* ");
         }
         printf("\n");
     }

     //2nd part//

for(row=n-1; row>=1; row--)
     {
         for(col=1; col<=n-row; col++)
            printf(" ");
         for(col=1; col<=row; col++)
         {
             printf("* ");
         }
         printf("\n");
     }


    return 0;
}
