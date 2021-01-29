#include<stdio.h>
int main(void)
{
    int a[50][50],b[50][50],c[50][50];
    int row1,row2,col1,col2,i,j,k,sum=0;

    //Input Collum And Row For Matrix A
    printf("\n\nMatrix A =\n");
    printf("Please Enter How many Row:\t");
    scanf("%d",&row1);
    printf("Please Enter How mant Collum:\t");
    scanf("%d",&col1);

    //Input Collum And Row For Matrix B
    printf("\n\nMatrix A =\n");
    printf("Please Enter How many Row:\t");
    scanf("%d",&row2);
    printf("Please Enter How mant Collum:\t");
    scanf("%d",&col2);

    //Checking Col1 And Row2 both are equal
 while(col1!=row2)
    {
        printf("\n\nError!! Please Echeck your input valuse, Must be have to first matrix col and second matrix row both are equal\n\n");
        printf("\n\nMatrix A =\n");
    printf("Please Enter How many Row:\t");
    scanf("%d",&row1);
    printf("Please Enter How mant Collum:\t");
    scanf("%d",&col1);

    //Input Collum And Row For Matrix B
    printf("\n\nMatrix B =\n");
    printf("Please Enter How many Row:\t");
    scanf("%d",&row2);
    printf("Please Enter How mant Collum:\t");
    scanf("%d",&col2);

    }

    //Input Matrix A
    printf("\n\nPlease Input Value of Matrix A\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //Input Matrix B
    printf("\n\nPlease Input Value of Matrix B\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //Matrix Multipliation//
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
            {
                sum = sum+a[i][k]*b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

//Print MAtrix A

    printf("\n\nPrintint Matrix A\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }

//Print MAtrix A

    printf("\n\nPrintint Matrix A\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }

    //Print MAtrix Miltiplation

    printf("\n\nPrintint Matrix A\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }





    return 0;
}
