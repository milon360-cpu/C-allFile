#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100],str1[100];
printf("Please Enter First String:\t");
gets(str);
printf("Please Enter Second String:\t");
gets(str1);
int Result;
     Result = strncmp(str,str1,2);
     if(Result==0)
     {
         printf("Equal");
     }
else{
    printf("Not Equal");
}


    getch();
    return 0;
}
