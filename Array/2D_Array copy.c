#include<stdio.h>
int main(void)
{
   int a[50][50],row,col,n,i;

  printf("\n\nPleaase Enter How many Row:\t");
  scanf("%d",&row);

  printf("\n\nPleaase Enter How many Collum:\t");
  scanf("%d",&col);

  for(i=0; i<row; i++)
  {
    for(n=0; n<col; n++)
        {
      printf("\n\nPLease Enter Your Value_%d:\t",i+1);
      scanf("%d",&a[i][n]);
        }
  }

for(i=0; i<row; i++)
    {
        for(n=0; n<col; n++)
        {
            printf("[%d] ",a[i][n]);
        }
printf("\n");
    }

    return 0;
}
