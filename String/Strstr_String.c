#include <stdio.h>
#include <string.h>


int main () {
   const char a[20] = "Milon Mondal";
   const char b[10] = "Tapu";
   char *ret;

   ret = strstr(b, a);

   printf("The substring is: %s\n", ret);

   return(0);
}
