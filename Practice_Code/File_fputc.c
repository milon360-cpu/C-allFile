// File Put Character//
#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *ptr;
    ptr = fopen("practice.txt","w");
    char ch[50];
    int n,length,i;
    printf("Please Enter Your Name:\t");
    gets(ch);
    length = strlen(ch);
if(ptr==NULL)
{
    printf("Fill doesn't Exist.\n");
}
else
{
    printf("\n\nFile is Opened\n\n");
  for(i=0; i<length; i++)
  {
      fputc(ch[i],ptr);
  }
}
fclose(ptr);


    return 0;
}
