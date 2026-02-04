// program to demonstrate nested structure 
#include <stdio.h>
#include<stdlib.h>
typedef struct subjectmarks 
{
    float math;
    float cp;
    float linux;
}subjectmarks;
typedef struct student
{
    int id;
    char name[20];
     subjectmarks marks;
}student;
int main() {
    student s1={101,"AAA",{90,80,70}};
    student s2={102,"BBB",{50,60,90}};
    printf("student1 details:");
    printf("id:%dname:%smath%fcp%flinux%f",s1.id,s1.name,s1.marks.math,s1.marks.cp,s1.marks.linux);
     printf("student2 details:");
    printf("id:%dname:%smath%fcp%flinux%f",s2.id,s2.name,s2.marks.math,s2.marks.cp,s2.marks.linux);
    return 0;
}