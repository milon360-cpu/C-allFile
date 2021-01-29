#include<stdio.h>
int get_sum(int x, int y)
{
    int sum= x+y;
    return sum;
}

void just_say()
{
    printf("Hello Milon, how are you?\n\n");
}


int main(void)
{

   just_say();

   int result = get_sum(200,400);
   printf("The sum of number:  %d\n\n",result);


    return 0;
}
