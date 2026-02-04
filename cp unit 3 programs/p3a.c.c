//c program to store amd display multiple students records using array of structures
#include <stdio.h>
struct student
{
    int id;
    float marks;
    char name[20];
};
int main() {
struct student s1[2]={{101,50,"AAA",},{102,60,"BBB"}};
for(int i=0;i<2;i++)
{
    printf("id:%d,name:%s,marks:%f\n",s1[i].id,s1[i].name,s1[i].marks);
}
return 0;
}