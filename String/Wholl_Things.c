#include<stdio.h>
#include<string.h>
int main(void)
{

    char str[100],ch;
    int word,number,vawol,consonent,other,i,upr,lwr;
    printf("\n\nPlease Enter Your String:\t");
    gets(str);


    i=word=number=vawol=consonent=other=0;
     while((ch=str[i])!='\0')
     {
         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U')
            vawol++;

         else if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
            consonent++;

         else if(ch>='0' && ch<='9')
            number++;

         else if(ch==' ')
            word++;

         else

        other++;

         i++;
     }
     word++;

     printf("\n\n The Vawol is:\t%d\n\n",vawol);
     printf("\n\n The consonent is:\t%d\n\n",consonent);

     printf("\n\n The number is:\t%d\n\n",number);
     printf("\n\n The word is:\t%d\n\n",word);
     printf("\n\n The specal charactern is: %d\n\n",other);



    return 0;
}
