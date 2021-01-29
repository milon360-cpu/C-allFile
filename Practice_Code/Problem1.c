#include<stdio.h>
#include<string.h>
int main(void)
{
char str[80];
int i=0,j;
printf("\n\nEnter a String:\t");
fflush(stdin);
gets(str);
j=strlen(str)-1;

while(i<=j)
{
    if(i<j)
        printf("%c %c",str[i],str[j]);
    else
        {
        printf("%c\n\n",str[i]);
    }
    j--;
    i++;
}




    return 0;
}
