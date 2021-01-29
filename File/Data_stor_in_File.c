#include<stdio.h>
#include<string.h>
int main(void)
{
FILE *ptro;
ptro = fopen("ptro.txt","w");
char name[50]="Milon Mondal is a good boy and he has no gf";
int i,length;
length=strlen(name);
for(i=0; i<length; i++)
{
    fputc(name[i],ptro);
}

fclose(ptro);


    return 0;
}
