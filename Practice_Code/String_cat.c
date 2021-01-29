#include<stdio.h>
#include<string.h>
int main(void)
{
 char cat[50],cat1[50];
 printf("\n");
 printf("Please Enter a Single Word For add Another word:\t");
gets(cat);

 printf("Please Enter a Single Word For add Another word:\t");
 gets(cat1);

 strcat(cat,cat1);
 printf("%s\n\n",cat);
 printf("%s\n\n\n",cat1);




    return 0;
}
