#include<stdio.h>
struct info
{
    char name[50];
    int id;
    float cgpa;
};

int main(void)
{
    struct info x,y;
    printf("\t\t\t\tStudent Information\n\n");
    printf("Please Enter Your Name:\t");
    gets(x.name);

    printf("Please Enter Your ID:\t");
    scanf("%d",&x.id);

    printf("PLease Enter Your CGPA:\t");
    scanf("%f",&x.cgpa);

    printf("\n\nStudent Name :\t%s\n",x.name);
    printf("Student ID :\t%d\n",x.id);
    printf("Student CGPA :\t%.2f\n",x.cgpa);


    getch();
    return 0;
}
