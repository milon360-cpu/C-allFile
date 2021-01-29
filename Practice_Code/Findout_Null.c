#include<stdio.h>
int main(void)
{
 char str[]={"abcd"};
 int i;
 //printf("\n please Enter a word for check null character:\t");
 //scanf("%c",&str);
 i=0;
 while(1)
 {
     printf("%d-%c",i,str[i]);
     if(str[i]=='\0')
        break;
        i++;
        printf("\n");


 }
printf("\n");

    return 0;
}
