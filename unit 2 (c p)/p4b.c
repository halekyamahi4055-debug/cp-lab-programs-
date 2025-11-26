// program to access array elements using pointer
#include <stdio.h>

int main() {
    int a[5]={10,20,30,40,50};
    int *ptr=a;
    printf("array elements using pointer:  \n");
    for(int i=0;i<5;i++)
    {printf("%d\n",*(ptr+i));}
    return 0;
}