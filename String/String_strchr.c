#include <stdio.h>
#include <string.h>

#define SIZE 5

int main(void)
{
  char buffer1[SIZE] = "Milon";
  char * ptr;
  int    ch = 'n';

  ptr = strchr( buffer1, ch );
  printf( " %s ", ptr );

  getch();
  return 0;

}
