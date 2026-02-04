// c program to use typedef with stucture
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int id;
    char name[20];
    float marks;
}student;
int main() {
    student s1;
    student s2;
printf("enter id,name,marks of s1:");
scanf("%d %s %f",&s1.id,&s1.name,&s1.marks);
printf("enter id,name,marks of s2:");
scanf("%d %s %f",&s2.id,&s2.name,&s2.marks);
printf("entered details of s1:%d\t%s\t%f\n",s1.id,s1.name,s1.marks);
    printf("entered details of s2:%d\t%s\t%f\n",s2.id,s2.name,s2.marks);
    return 0;
    
}