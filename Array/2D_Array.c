#include<stdio.h>
int main(void)
{

    int a[1000][1000],i,row,col,j,sum=0;
    float avg;

    printf("\n\nPlease Enter How many Row do you want:\t");
    scanf("%d",&row);
    printf("\nPlease Enter How many Colum do you want:\t");
    scanf("%d",&col);

for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            //printf("Please Enter Your  value:\t");
           scanf("%d",&a[i][j]);
   }

 for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
            //printf("Please Enter Your  value:\t");

printf("\n");

}
for(i=0; i<row; i++)
    {
       for(j=0; j<col; j++)

            avg=sum/a[i][j];

    }


          printf("The Sum of whole Number:\t%d\n\n",sum);
          printf("The average of Whole Number:\t%f\n\n",avg);





    return 0;
}
