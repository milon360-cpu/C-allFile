#include<stdio.h>
int main(void)
{

 int A[100][100],row,col,i,j;
  int Diogonal =0 ,Upper_Triangle=0, Lower_Triangle=0;
 printf("Please enter How many row:\t");
 scanf("%d",&row);
  printf("Please enter How many column:\t");
 scanf("%d",&col);

     for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             printf("[%d][%d] = ",i,j);
             scanf("%d",&A[i][j]);
         }

     }

 printf("\n\n Matrix A\n\n");

  for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             printf("%d ",A[i][j]);

         }
  printf("\n");
     }

for(i=0; i<row; i++)
     {
         for(j=0; j<col; j++)
         {
             if(i==j)
             {
                 Diogonal =Diogonal+ A[i][j];
             }
           else  if(i<j)
             {
                  Upper_Triangle =  Upper_Triangle+A[i][j];
             }
          else   if(i>j)
             {
                 Lower_Triangle = Lower_Triangle+ A[i][j];
             }
         }
     }

printf("\n\n Diagonal Element:\t%d",Diogonal);
printf("\n\n Diagonal Element:\t%d",Upper_Triangle);
printf("\n\n Diagonal Element:\t%d",Lower_Triangle);


    getch();
    return 0;
}
