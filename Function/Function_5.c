#include<stdio.h>
float summition(int x, int y)
{

    return x+y;
}

float substr(int x, int y)
{

    return x-y;
}

float multiplies(int x, int y)
{

    return x*y;
}

float divides(int x, int y)
{

    return x/y;
}


int main(void)
{
    float x,y;
    printf("Please Enter Your Number For Calcluation:\t");
    scanf("%f%f",&x,&y);

    float sum= summition(x,y);
    printf("The Sumition of:\t%.2f\n",sum);

     float sub= substr(x,y);
    printf("The substr of:\t%.2f\n",sub);

     float mul= multiplies(x,y);
    printf("The multiplies of:\t%.2f\n",mul);

     float div= divides (x,y);
    printf("The divides of:\t%.2f\n",div);





    return 0;
}
