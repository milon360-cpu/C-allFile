#include<stdio.h>
void leniar_search(int n)
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
  int i,febo=-1;
  for(i=0; i<11; i++)
  {
      if(n==a[i])
      {
          febo = i+1;
          break;
      }
  }
      if(n==-1)
      {
          printf("\n\nNumber Is not founds:\t\n\n");
      }
      else{
        printf("THe value is= %d and \n\n position is=%d\n\n",n,febo);
      }





}
int main(void)
{
    int n;
    printf("\n\nPlease Enter Your Value:\t");
    scanf("%d",&n);

    leniar_search(n);



    return 0;
}
