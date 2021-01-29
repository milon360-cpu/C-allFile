#include<stdio.h>
int main(void)
{
    FILE *ptr;
    ptr = fopen("student.txt","r");
    char ch[50];

    if(ptr==NULL)
    {
        printf("File doesnt Exist");
    }
    else
    {
        printf("File is Opend");
        while(!feof(ptr))
        {
            fgets(ch,25,ptr);
            printf("%s",ch);
        }
        fclose(ptr);
    }


    return 0;
}
