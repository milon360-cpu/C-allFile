#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[50];
    char str2[50];
    int i=0, len=0, j;
    printf("\n");

    printf("Please Enter Your Name For Reverse:\t");
    gets(str1);

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("The Name is:\t%s\n\n\n",str1);
    printf("The Name is:\t%s\n\n\n",str2);





    return 0;
}
