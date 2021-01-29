//File Puts / fputs//

#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("practice.txt","w");
char str[50];


if(ptr==NULL)
{
    printf("File doesn't Exist");
}
else
{
    printf("File is Opened\t\n\n");
    printf("Please Enter Your String :");
    gets(str);
    fputs(str,ptr);
    printf("\n\nFile Written Successfully\n\n");


    fclose(ptr);
}



    return 0;
}
