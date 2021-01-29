#include<stdio.h>
#include<string.h>
int main(void)
{
char com[50],com1[55];
int n;
printf("\n");
printf("please Enter a single Word for compare:\t");
scanf("%s",com);

printf("please Enter aother single Word for compare:\t");
scanf("%s",com1);

n=strcmp(com,com1);
if(n==0)
{
    printf("The both word's character is equal.\n\n");
}
else
{
   printf("The both word is not equal\n\n");
}





    return 0;
}
