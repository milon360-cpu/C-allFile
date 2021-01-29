#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("cfile.txt","r");

char ch[30];
if(ptr==NULL)
{
    printf("File Doesn't Exist ");
}
else
{
    printf("File is Opened.");

    while(!feof(ptr))
    {
         fgets(ch,30,ptr);
        printf("%s",ch);
    }
    fclose(ptr);
}







    return 0;
}
