//function returning pointer to array element
#include <stdio.h>
int* display(int a[],int index)
{
    return &a[index];
}
int main(){
    int a[5]={1,2,3,4,5};
   int *p= display(a,2);
   printf("%d",*p);
    return 0;
}