#include<stdio.h>
void even_odd(int x)
{

    if(x%2 == 0)
    {
        printf("\nEven Number\n");
    }
    else{
        printf("\n Odd Number\n");
    }
}

int main(void)
{
    int x;
     printf("PLease Enter Your Number:\t");
      scanf("%d",&x);

    even_odd(x);




    return 0;
}
