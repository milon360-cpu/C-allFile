#include<stdio.h>
#include<unistd.h>
#define CYCLE 30
//#define clrser()printf("\e[1;1H\e[2j")
int main(void)
{
    int hour,minutes,second;
    printf("\n\n\n\nPlesase Enter Hoe Many Hours:\t");
    scanf("%d",&hour);
    printf("\nPlesase Enter Hoe Many Minutes:\t");
    scanf("%d",&minutes);
    printf("\nPlesase Enter Hoe Many Second:\t");
    scanf("%d",&second);
    clrser();

int h=0,m=0,s=0;
while(1)
{
    printf("\n\n\n\n%.2d:%.2d:%.2d\n\n\n",h,m,s);
    if(h==hour && m==minutes && s==second)
    {
         break;
    }
    else
    {
        clrser();
   }
    s++;
     sleep(1);
    if(s==CYCLE)
    {
        m++;
        s=0;
    }
    if(m==CYCLE)
    {
        h++;
        m=0;
    }

}



    return 0;
}
