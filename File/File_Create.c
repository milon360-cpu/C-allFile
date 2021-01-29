#include<stdio.h>
int main(void)
{
FILE *ptr;

ptr = fopen("info.txt","w");

if(ptr==NULL)
{
    printf("\n\nFile doesn't  Exist\n\n");
}
else
{
    printf("\n\nFile is Opened.\n\n");

    fclose (ptr);
}





    return 0;
}
