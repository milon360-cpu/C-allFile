#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("first.txt","w");
char name[50];

if(ptr==NULL)
{
    printf("\nFile is doesn't Exist\n");
}
else
{
    printf("\nFile is Opened:\t");
    printf("Please Enter Your Name:\t");
    gets(name);

    fputs(name,ptr);
    fputs("\n",ptr);
    printf("File Written successfully\n");
    fclose(ptr);



}



    return 0;
}
