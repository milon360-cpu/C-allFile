#include <stdio.h>
#include <string.h>

int main( )
{
   char str1[] = "gaeeks" ;
   char str2[] = "geeks" ;

   int j = strcmpi ( str1, str2 ) ;

   printf ( "The function returns = %d",j ) ;
   getch();
   return 0;
}
