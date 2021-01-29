#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[50];
    char b[20];
    printf("\n Please Enter First String:\t");
    gets(a);

    printf("\n\n Please Enter Second String:\t");
    gets(b);
    int n=strcmp(a,b);
    if(n==0)
    {
        printf("\n\n  Both String are equal.\n\n");
    }
    else{
        printf("\n\n Both String are not Equal.\n\n");

    }

getch();
  return 0;
}
