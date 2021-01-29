#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int *ptr1,*ptr2;
ptr1 = (int *)malloc(4*sizeof(int));
ptr2 = calloc(5,4);

if(ptr1==NULL || ptr2==NULL)
{
    printf("Memory Is not succesfull");
}
else
    {
        printf("\n\nMemory allaction is succesfually\n\n");
        free(ptr1);
        printf("Memory is Free\n\n");
        ptr2=realloc(ptr2,50);
        printf("memory is reallocated\n\n");
    }


    return 0;
}
