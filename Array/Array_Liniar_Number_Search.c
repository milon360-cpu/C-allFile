#include<stdio.h>
int main(void)
{
   int a[15]={45,12,71,15,46,78,49,56,12,2,35,36,31};
   int i,n,pos=-1;

   printf("\n\nPlease Enter Your Value:\t");
   scanf("%d",&n);
   for(i=0; i<13; i++)
   {
       if(n==a[i])
        pos=i+1;
        break;
   }
    if(pos==-1)
    {
        printf("The Number is not found\n\n");
    }
    else{
        printf("The Position of number:\t%d\n\n",pos);
    }



    return 0;
}
