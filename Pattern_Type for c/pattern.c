#include<stdio.h>
int main(void)
{


int row,col,n;
printf("\n Please Enter Your Value For Pattern:\t");
scanf("%d",&n);

for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)
        if(col==row || row+col==n+1)
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
