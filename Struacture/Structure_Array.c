#include<stdio.h>
struct student
{
     char name[50];
     int id;
     float cgpa;
};
int main(void)
{

    struct student student1[500];
    int i,n;
    printf("How many Student:\t");
    scanf("%d",&n);

    {
        printf("\n\n\t\t\tStudent Information student_%d\n\n\n",i+1);
        printf("Please Enter Student Name:\t");
        fflush(stdin);
        gets(student1[i].name);

        printf("Please Enter Student ID:\t");
        scanf("%d",&  for(i=0; i<n; i++)student1[i].id);

        printf("Please Enter Student cgpa:\t");
        scanf("%f",&student1[i].cgpa);

    }
     for(i=0; i<n; i++)
     {
         printf("\n\n\n\n\n\t\t\tStudent Information student_%d\n\n",i+1);

        printf("Student Name:\t%s\n",student1[i].name);

        printf("Student ID:\t%d\n",student1[i].id);

        printf("Student cgpa:\t%.2f\n",student1[i].cgpa);
     }
    return 0;
}
