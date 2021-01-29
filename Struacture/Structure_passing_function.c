#include<stdio.h>
struct student
{
    int id;
    float cgpa;
    char name[20];
};
void fun( struct student x )
{
    printf("\n\nThe student ID is:\t%d\n",x.id);
    printf("The Student CGPA:\t%.2f\n",x.cgpa);
    printf("The Student Name:\t%s\n",x.name);

}
int main(void)
{
 struct student s1;
 strcpy(s1.name,"Milon Mondal");
 s1.id=18;
 s1.cgpa=3.28;

 fun(s1);




    return 0;
}
