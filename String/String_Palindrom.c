#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[50],b[50];
    int i=0,len=0,j,n;
    printf("\n");
    printf("\n\nPlease Enter Your Name For Check Palindrom:\t");
    gets(a);

    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("The Revers Word is:\t%s\n\n\n",b);

     n= strcmp(a,b);

    if(n==0)
    {
        printf("The Wor is palindrom\n\n\n");
    }
    else{
        printf("The Word is not palindrom\n\n\n");
    }

getch();
return 0;


}


