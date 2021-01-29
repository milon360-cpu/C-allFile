#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
    float x;
};
void fun(struct student x1)
{
    printf("\n\nThe Student Name is:\t%s\n",x1.name);
    printf("The Student ID:\t%d\n",x1.id);
    printf("Student cgpa:\t%.2f\n\n",x1.cgpa);


}
int main(void)
{
    struct student s1;

   strcpy(s1.name,"Milon Mondal");
    s1.id = 18;
    s1.cgpa = 3.28;

    fun(s1);

getch();

    return 0;
}
