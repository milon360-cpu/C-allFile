#include<stdio.h>
int main(void)
{
int row,col,n;
printf("Please Enter Your Value For Pattern:\t");
scanf("%d",&n);

for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)

        if(col==1 || row==n || row==col)
    {
        printf("*");
    }
    else{
        printf(" ");
    }
    printf("\n");
}



    return 0;
}
