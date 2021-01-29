#include<stdio.h>
int main(void)
{

   int a[500][500],i,j,row,col,sum=0;

   printf("\n Please Enter How many Row:\t");
   scanf("%d",&row);
   printf("\n Please Enter How many Collum:\t");
   scanf("%d",&col);
   printf("\n");
   printf("\n");

   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           printf(" [%d][%d] = ",i,j);

           scanf("%d",&a[i][j]);
       }
   }

   printf("\n\nPrint sum of diagonal Eliment:\t\n");

 for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           if(i==j)
            sum = sum+a[i][j];
       }



   }

   printf("Sum of Diagonal Elements:\t%d",sum);

printf("\n\nPrint Matrix A:\t\n");

 for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }




    return 0;
}
