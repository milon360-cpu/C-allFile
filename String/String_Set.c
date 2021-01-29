#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
printf("\n Please Enter A string:\t");
gets(str);

strset(str,'#');
printf("\n Set String Value:\t%s",str);


    getch();
    return 0;
}
