#include<stdio.h>
int main(void)
{
    FILE *ptr;
    ptr =fopen("cfile.txt","w");

    char ch[50]={"Mion Monddal"},i;
    int length;
    length = strlen(ch);
    for(i=0; i<length; i++)
    {
        fputc(ch[i],ptr);

    }
    fclose(ptr);





    return 0;
}
