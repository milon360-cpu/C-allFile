#include<stdio.h>
int main(void)
{
    FILE *ptr;
    ptr = fopen("infoY.text","r");
    if(ptr==NULL)
    {
        printf("File is Doesn't Exit");
    }
    else
    {
        while(!feof(ptr))
        {
            char ch[30] ;

              fgets(ch,30,ptr) ;
             printf("%s",ch);
        }
        fclose(ptr);
    }

    getch();
    return 0;
}
