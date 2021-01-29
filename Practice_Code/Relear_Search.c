#include<stdio.h>
int main(void)
{
int A[] = {2,9,4,5,7,49,23,34,78};
int i,N;
int size = sizeof(A)/sizeof(A[0]);
printf("\n Please Enter Your Searching Number:\t");
scanf("%d",&N);
for(i=0; i<size; i++)
{
    if(N==A[i])
    {
        printf("\n Your Searching Value is: %d  and  Index No: %d",N,i+1);
        getch();
        return 0;
    }

}
    printf("Your Searching Number is Not Found");
    getch();
    return 0;
}
