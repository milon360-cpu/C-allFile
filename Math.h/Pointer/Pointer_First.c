#include <stdio.h>
int main()
{
   int x=500,*ptr,y=200,*p;
   ptr = &x;
   p = &y;

   printf("\n\n%d\n\n",*ptr);
   printf("\n\n%d\n\n",*p);

   return 0;
}
