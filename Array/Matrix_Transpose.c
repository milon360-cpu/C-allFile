#include<stdio.h>
int main(void)
{
    int a[50][50],transpose[50][50];
    int row,col,i,j;

    printf("\n\nPlease Enter How many Row For Matrix:\t");
    scanf("%d",&row);
    printf("\nPlease Enter How many collum For Matrix:\t");
    scanf("%d",&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\n\nBefor Transpose:\t\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }

printf("\n\nAfter Transpose:\t\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);

        }
        printf("\n");
    }


    return 0;
}
