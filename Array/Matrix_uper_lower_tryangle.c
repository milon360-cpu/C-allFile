#include<stdio.h>
int main(void)
{
int A[50][50],i,j,col,row,upper=0,lower=0;

printf("\nPlease Enter How many Row :\t");
scanf("%d",&row);
printf("\nPlease Enter How many Collum :\t");
scanf("%d",&col);

for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {

        printf("[%d][%d]",i,j);
        scanf("%d",&A[i][j]);
    }
}




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
        if(i<j)
        {
          lower = lower+A[i][j];
        }

    }
}

printf("Upper Tryangle is:\t%d\n\n",lower);

for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        if(i>j)
        {
          upper = upper+A[i][j];
        }

    }
}



printf("lower Tryangle is:\t%d\n\n",upper);






    return 0;
}
