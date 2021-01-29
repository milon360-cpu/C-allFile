//File Scanf or fcsanf //
#include<stdio.h>
int main(void)
{
FILE *ptr;
ptr = fopen("student.txt","w");
char  name[50],dep[50];
int age,phone,n,i;

if(ptr==NULL)
{
    printf("File dosent Exits");
}
else
{
    printf("\n\nFile is Opend\n\n");

    printf("Please Enter How many Student:\t");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Please Enter Student Name:\t");
        scanf("%s",name);
       printf("\nPlease Enter Department of Student :\t");
       scanf("%s",dep);

       printf("\nPlease Enter Age of Student :\t");
       scanf("%d",&age);
       printf("\nPlease Enter contact number of Student :\t");
       scanf("%d",&phone);

       fprintf(ptr,"\n%s\t\t%s\t\t%d\t\t%d\n",name,dep,age,phone);

       printf("File is Writen Succenfully.\n\n");

    }

    fclose(ptr);
}




    return 0;
}
