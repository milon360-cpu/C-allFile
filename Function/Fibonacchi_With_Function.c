#include<stdio.h>

void fibonacchi(int rang)
{


int first=0,second=1,count=0,fibo;
while(count<rang)
{
    if(count<=1)
    {
        fibo=count;
    }
    else
        {
            fibo = first+second;
            first = second;
            second = fibo;

        }
        printf("%d ",fibo);
        count++;
}
}
int main(void)
{
    int rang;
    printf("Please Enter YOur Rang:\t");
    scanf("%d",&rang);

    printf("\n\n The Serise is:\t\n\n");
    fibonacchi(rang);




    return 0;
}
