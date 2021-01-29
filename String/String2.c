#include<stdio.h>
int main(void)
{
    char name[30],i[47],n[30];
    //char a[32];

    printf("Please Enter Your Name:\t");
    scanf("%s",name);
    printf("The Name is %s\n\n",name);

    printf("Please Enter Your Father Name:\t");
    scanf("%s",i);
    printf("%s\n\n",i);

    printf("Please Enter Your Brother Name:\t");
    gets(n);// compiler  told theat get is unsafe for programing;//
    printf("%s",n);






    return 0;
}
