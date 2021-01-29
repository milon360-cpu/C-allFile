#include<stdio.h>
int main(void)
{
int n,i,counter,sum;
char name[50];
printf("\n");
printf("Pease Enter a single word for word length:\t");
scanf("%s",name);

i=0;counter=0; sum=0;
while(name[i]!='\0')
{
    counter++;
    i++;
}
sum=sum+counter;
printf("The Length of word:\t%d\n\n",sum);



    return 0;
}
