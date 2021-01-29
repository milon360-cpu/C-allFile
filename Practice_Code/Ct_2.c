#include<stdio.h>
#include<string.h>
int main(void)
{
char s1[15]= "University",s2[15]= "Faculty",  s3 [15]= "Engineering";
int n,n1;

//String Copy ot Ctrcpy//

printf("\n\nBefor Copying: \n\n");
printf("String of s1:\t%s\n\n",s1);

printf("\nAfter Copying: \n\n");
strcpy(s1,s2);
printf("String of s1:\t%s\n\n",s1);

//String Compare//

printf("String Compare:\t\n\n");
n=strcmp(s1,s2);
if(n==0)
{
   printf("The string are Edual\n\n");
}

else
    {
        printf("The String are not Equal.");
    }

// String Cat or Strcat//
printf("\nString Cat:\t\n");
strcat(s2,s1);
printf("String of s2:\t%s ",s2);

//String Length or Strlen//
printf("\n\nString Length:\t\n");
n1 = strlen(s1);

printf("Length of string S1:\t%d\n\n",n1);

    return 0;
}
