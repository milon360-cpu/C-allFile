#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("student.txt","r");
char ch;

if(ptr==NULL)
{
    printf("File dosent Exist");
}
else
{
    printf("File is Opened\n");
    while(!feof(ptr))
    {
         ch = fgetc(ptr);
         printf("%c",ch);
    }
    printf("\n");

        fclose(ptr);
}





    return 0;
}
