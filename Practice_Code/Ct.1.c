#include<stdio.h>
int main(void)
{
char A [ 3 ] [ 4] = { { 'U', 'O','D','A'},{'C','O','D','A'},{'S','O','D','A'} } ;

printf("\n\nAll the elements of 2D array A[ ][ ] are : \n\n");

   for( int i = 0 ; i < 3; i++ ) {
      for(int j= 0 ; j < 4 ; j++ ) {
            printf("'%c' ", A[i][j]);
   }
   printf("\n");
  }
printf("\n\n");

    return 0;
}
