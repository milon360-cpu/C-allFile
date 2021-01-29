#include<stdio.h>
struct student
{
// char name[50];
 int id;
 float cgpa;
};

int main(void)
{
    struct student s1,s2,s3;
    //s1.name='milon';
    s1.id=18;
    s1.cgpa=3.28;

    //s2.name='Neeha';
    s2.id=0112010120;
    s2.cgpa=3.88;


    s3=s2;

    printf("\n\n%s\n %d\n %.2f\n\n",s1.id,s1.cgpa);
    printf("\n\n%s\n %d\n %.2f\n\n",s2.id,s2.cgpa);
    printf("\n\n%s\n %d\n %.2f\n\n",s3.id,s3.cgpa);






    return 0;
}
