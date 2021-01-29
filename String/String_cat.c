#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("\n");
    char a[50];
    char b[50];
     printf("Please Enter a Single Word:\t");
     scanf("%s",a);
     printf("\n");

     printf("pleasse Enter a Single Word For add Eatcdh other:\t");
     scanf("%s",b);
     printf("\n");

     strcat(a,b);
     printf("The word is:\t%s\n\n",a);
     printf("The another Word is:\t%s\n\n",b);




    return 0;
}
