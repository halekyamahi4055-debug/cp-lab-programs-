// c program to define a structure and access 
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main() {
 struct student s1={101,"AAA",95.5};
 struct student s2={102,"BBB",90};
 printf("student 1 details:\n");
 printf("id no:%d\t",s1.id);
 printf("name:%s\t",s1.name);
 printf("marks:%f\t\n",s1.marks);
 printf("student 2 details:\n");
 printf("id no:%d\t",s2.id);
 printf("name:%s\t",s2.name);
 printf("marks:%f\t",s2.marks);
    return 0;
}