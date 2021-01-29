#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100],str1[100];
printf("Please Enter First String:\t");
gets(str);
printf("Please Enter Second String:\t");
gets(str1);

strncpy(str,str1,2);
printf("%s",str);


    getch();
    return 0;
}
