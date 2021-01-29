#include<stdio.h>

void swaping(int *ptr1, int *ptr2)
{
    int tempo;

    tempo = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tempo;


}



int main(void)
{
int a=20,b=30;
printf("\n\n Befor Swaping: a=%d,b=%d\n\n",a,b);

swaping(&a,&b);
printf("\n\n After Swaping: a=%d,b=%d\n\n",a,b);



    return 0;
}
