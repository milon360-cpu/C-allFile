#include<stdio.h>
int main(void)
{
int A[10],i,count=0,count1=0,x,y;

//Input Part//
printf("\n\nPLease Enter Ten Numbers For Check Even Or Odd:\t\n\n");
for(i=0; i<10; i++)
{
    printf("Number-%d:\t",i+1);
    scanf("%d",&A[i]);
}

//Condition Check //

printf("\n");
for(i=0; i<10; i++)
{
    if(A[i] % 2==0)
    {
        count++;
    }
    else
    {
        count1++;
    }
}

//Printing Part //

    printf("Total Even Number:\t%d\n\n",count);
    printf("Total Odd Number:\t%d\n\n",count1);



    return 0;
}
