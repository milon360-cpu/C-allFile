#include<stdio.h>
#include<string.h>
int main(void)
{
 char str[100],str2[100];
 printf("Please Enter First String:\t");
 gets(str);
 printf("Please Enter Second String:\t");
 gets(str2);
  strncat(str, str2, 3 );
  printf("%s",str);


    getch();
    return 0;
}
