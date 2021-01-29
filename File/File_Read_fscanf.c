#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("cfile.txt","r");
char ch[50];
char ch1[50];
if(ptr==NULL)
{
    printf("File is doesn't Exits.");
}
else
{
    printf("\n\n File is Opened\n\n");
    fscanf(ptr,"%s %s",&ch,&ch1);
    printf("%s ",ch);
    printf("%s\n\n",ch1);
    fclose(ptr);
}
    return 0;
}
