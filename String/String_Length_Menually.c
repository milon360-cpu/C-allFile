#include<stdio.h>
int main(void)
{
    char a[50],n,len,sum=0;
    printf("\n\nPlease Enter Your string for length:\t");
    fflush(stdin);
    gets(a);

    n=0;
    while(a[n]!='\0')
    {
         len++;
        n++;


    }

 sum=sum+len;

printf("\n\n%d\n\n",sum);



    return 0;
}
