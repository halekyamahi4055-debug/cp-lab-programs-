//program to access structure members using pointers to structures
#include <stdio.h>
struct student
{
    int id;
    float marks;
    char name[20];
};
int main() {
struct student s1={101,50,"AA"};
struct student s2={102,70,"BB"};
struct student *ptr;
ptr=&s1;
    printf("student1 details:id:%d,marks:%f,name:%s\n",ptr->id,ptr->marks,ptr->name);
ptr=&s2;
    printf("student2 details:id:%d,marks:%f,name:%s\n",ptr->id,ptr->marks,ptr->name);
return 0;
}