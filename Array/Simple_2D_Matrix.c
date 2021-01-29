#include<stdio.h>
int main(void)
{
   int A[50][50],B[50][50],C[50][50],i,j,row,col;

   printf("\n\nPlease Enter How many Row do you want:\t");
   scanf("%d",&row);
   printf("\n\nPlease Enter How many Row do you want:\t");
   scanf("%d",&col);
   //input matrix A
    printf("Matrix = A");
   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {

           printf("\nA[%d][%d]",i,j);
           scanf("%d",&A[i][j]);
       }
   }

  //Matrix B
   printf("\n\nPlease Enter How many Row do you want:\t");
   scanf("%d",&row);
   printf("\n\nPlease Enter How many Row do you want:\t");
   scanf("%d",&col);
    printf("Matrix = A");

   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           printf("Please enter your Value:\t");
           printf("\nA[%d][%d]",i,j);
           scanf("%d",&A[i][j]);
       }
   }
   //print Matrix A
   for(i=0; i<row; i++)
   {
     printf("\t");
       for(j=0; j<col; j++)

       {
           printf("%d ",A[i][j]);

       }
printf("\n");
   }
printf("\n");
//Print Matrix B

   for(i=0; i<row; i++)
   {
     printf("\t");
       for(j=0; j<col; j++)

       {
           printf("%d ",A[i][j]);

       }
printf("\n");
   }

printf("\n");
for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           C[i][j] = A[i][j] + B[i][j];
       }
   }
printf("\n");
   for(i=0; i<row; i++)
   {
     printf("\t");
       for(j=0; j<col; j++)

       {
           printf("%d ",C[i][j]);

       }
printf("\n");
   }



    return 0;
}
