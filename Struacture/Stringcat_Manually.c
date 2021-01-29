#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[50],str2[50];
    int i=0,j=0,len=0;

printf("\n");
printf("Please Enter a word For Add Another Word:\t ");
gets(str1);

printf("Please Enter Another Word:\t ");
gets(str2);

while(str1[i]!='\0')
{
    i++;
    len++;
}
while(str2[j]!='\0')
{
    str1[len+j]=str2[j];
    j++;
}
printf("%s\n\n",str1);





    return 0;

}
