#include<stdio.h>
#include<string.h>
int main(void)
{
char str[50];
int i;
printf("Please Enter Your Name For see separate characcter:\t");
gets(str);

i=0;
while(str[i]!='\0')
{
    printf("%c",str[i]);
    printf("\n");
    i++;
}



    return 0;
}
