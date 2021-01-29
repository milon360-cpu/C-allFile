#include<stdio.h>
int main(void)
{
int n, row, col;
printf("\n");
printf("Please Enter Your Value:\t");
scanf("%d",&n);
for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)
    {
        if(row==1 || row==n || col==1 || col==n)
            printf("*");
            else{
                printf(" ");
            }

    }
     printf("\n");
}



    return 0;
}
