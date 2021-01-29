#include<stdio.h>
struct student
{
    int id;
    float cgpa;
    char name[10];
};
struct student s1,s2,s3;
int main(void)
{

s1.id=18;
s1.cgpa=3.25;
strcpy(s1.name,"milon");

s2.id=10;
s2.cgpa=3.21;
strcpy(s2.name,"tapu");

s3=s2;

if(s3.id==s2.id && s3.cgpa==s2.cgpa && s3.name==s2.name)
{
    printf("\n\n Equal");
}
else{
    printf("\n\n Not Equal");
}

getch();

    return 0;
}
