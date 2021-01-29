#include<stdio.h>
int main(void)
{
    int n,row,col;
    printf("PLease Enter Your valu For Pattern:\t");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col*row);

        }
        printf("\n");
    }



    return 0;
}
