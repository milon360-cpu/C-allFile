#include<stdio.h>
int main(void)
{
 FILE *ptr;
 ptr = fopen("information.txt","a");
 char name[50],dep[10];
 int age,i,n;

 if(ptr==NULL)
 {
     printf("File Doesnt Exits");
 }
else
{
    printf("\n\nFile in Opend\n\n");s
    printf("Please Enter How many Student Informations:\t");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("\n\nStudent_%d:\n\n",i);
        printf("Enter Student Name:\t");
       scanf("%s",name);

        printf("Enter Student Department Name:\t");
        scanf("%s",dep);


        printf("Enter Student Age:\t");
        scanf("%d",&age);

        fprintf(ptr,"\n%s\t\t%s\t%d\n",name,dep,age);

    }
    fclose(ptr);
}




    return 0;
}
