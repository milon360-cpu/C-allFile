#include<stdio.h>
int main(void)
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,sum=0,result;


    //Input Matrix A
    printf("\n\nPlease Enter Input Value of Matrix A\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("[%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //Input Matrix B
    printf("\n\nPlease Enter Input Value of Matrix B\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("[%d] [%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //Multipluation
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            for(k=0; k<3; k++)
        {
           sum = sum+a[i][k]*b[k][j];
        }
        c[i][j] = sum;
        sum = 0;
        }
    }


    printf("\nMatrix c is Printing:\t\n");

      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }





    return 0;
}
