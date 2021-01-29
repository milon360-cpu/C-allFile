#include<stdio.h>
int main(void)
{
  int a[50][50],b[50][50],c[50][50],d[50][50];
  int row,col,i,j;

//Input Season Matrix a//

  printf("\nMatrix A  :\n");
  printf("\n\nPlease Enter How many Row:\t");
  scanf("%d",&row);
  printf("\nPlease Enter How many Collum:\t");
  scanf("%d",&col);

   printf("\nPlease Enter Input For Matrix A :\n\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
  }

//Input Season Matrix b//

  printf("\nMatrix B :\n");
  printf("\n\nPlease Enter How many Row:\t");
  scanf("%d",&row);
  printf("\nPlease Enter How many Collum:\t");
  scanf("%d",&col);

 printf("\nPlease Enter Input For Matrix B :\n\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
  }

  //Summision Part of Matrix c= a+b//
/*
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          c[i][j] = a[i][j] + b[i][j];
      }
  }
*/
  //Substraction Part of Matrix d= a-b//
/*
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          d[i][j] = a[i][j] - b[i][j];
      }
  }
*/
  //Printing Part of a://

  printf("\nOutput of Matrix A:\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }

//Printing Part of b://

  printf("\nOutput of Matrix B:\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
          printf("%d ",b[i][j]);
      }
      printf("\n");
  }
/*
  //Output Sumussion of c=a+b
  printf("\nSum of array:\t\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
         printf("%d ",c[i][j]);
      }
      printf("\n");
  }

  //Output substraction  of d=a-b
  printf("\substraction of array:\t\n");
  for(i=0; i<row; i++)
  {
      for(j=0; j<col; j++)
      {
         printf("%d ",d[i][j]);
      }
      printf("\n");
  }

*/
getch();
    return 0;
}
