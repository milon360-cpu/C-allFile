// The code i not working .
#include<stdio.h>
struct student
{
    char name[50];
    int id;
    float cgpa;
};

struct student s1,s2;
int main(void)
{
printf("\n\n\nplease Enter your name:\t");
gets(s1.name);
printf("please Enter your ID:\t");
scanf("%d",&s1.id);
printf("please Enter your cgpa:\t");
scanf("%f",&s1.cgpa);



printf("\n\n\nplease Enter your name:\t");
scanf("%s",s2.name);
printf("please Enter your ID:\t");
scanf("%d",&s2.id);
printf("please Enter your cgpa:\t");
scanf("%f",&s2.cgpa);


 if(s1.name==s2.name && s1.id==s2.id && s1.cgpa==s2.cgpa)
 {
     printf(" Equal\n\n");
 }
 else{
    printf("not  Equal\n\n");
 }





    return 0;
}
