// passing array of structure  to the function
#include <stdio.h>
struct student
{
    int id;
    char name[20];
};
void display(struct student*s,int n)
{
    for(int i=0;i<n;i++)
    printf("id:%d name:%s\n",s[i].id,s[i].name);
}
int main() {
    struct student s[2]={{101,"anu"},{102,"vasu"}};
    display(s,2);

    return 0;
}