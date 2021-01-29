#include<stdio.h>
void devide_number(int x)
{
    int i;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
}
int main(void)
{


    devide_number(50);


    return 0;
}
