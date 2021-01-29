#include<stdio.h>
int main(void)
{
    FILE *ptr;

  ptr = fopen("infoY.text","w");
  char ch[]="Milon Mondal Tapu,Hey boss how are you";
 int  length = strlen(ch);

  if(ptr==NULL)
  {
      printf("File is doesn't Exit");
  }
    else
    {
        printf("File is Opened");
         for(int i=0; i<length; i++)
         {
               fputc(ch[i],ptr);

         }

             fclose(ptr);
    }




    getch();
    return 0;
}
