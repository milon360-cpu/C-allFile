#include<stdio.h>
int main(void)
{
    FILE *ptr;
    ptr = fopen("student.txt","r");
     char ch[50];
     int ch1;

     if(ptr==NULL)
     {
         printf("File Dosent EXist");
     }
     else
        {
           printf("File Is Opend\n\n");
           fscanf(ptr,"%s %d",&ch,&ch1);

           printf("%s ",ch);
           printf("%d\n",ch1);

        }

        fclose(ptr);




    return 0;
}
