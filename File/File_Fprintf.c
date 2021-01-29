#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("cfile.txt","w");
char ch [50];
int age;

if(ptr==NULL)
{
    printf("File is Exist");
}
else
    {
    printf("File is Opened\n\n");
    printf("Please Enter Name:\t");
    gets(ch);
    printf("\nPlease Enter Your Age:\t");
    scanf("%d",&age);
    fprintf(ptr,"\n\nname=%s, Age=%d\n",ch,age);
    printf("File is written Successfully\n");
    fclose(ptr);



    }




    return 0;
}
