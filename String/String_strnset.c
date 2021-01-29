#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
getche();
printf("\n Please Enter a String:\t");
gets(str);
strnset(str,'*',5);
printf("%s",str);


    getch();
    return 0;
}
