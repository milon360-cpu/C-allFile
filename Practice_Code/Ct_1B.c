#include<stdio.h>
int main(void)
{
 int table[3][2]={{1,8},{2,6},{5,8}};
 int i,j;
 printf("\n\nArray Table:\t\n\n");

 //Loopimg for printing:
 for(i=0; i<3; i++)
 {
     for(j=0; j<2; j++)
     {    //printf("[%d][%d]",i,j);
         printf("%d ",table[i][j]);
     }
     printf("\n");
 }
 printf("\n\n");





    return 0;
}
