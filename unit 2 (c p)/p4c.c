//program to demonstrate pointer arithmetic
#include <stdio.h>

int main() {
    int a[3]={10,20,30};
    int *ptr=a;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    return 0;
}