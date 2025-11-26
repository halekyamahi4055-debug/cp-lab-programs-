// program to count no.of elements in array 
#include <stdio.h>

int main() {
    int a[]={10,20,30,40,50};
    int count;
    count=sizeof(a)/sizeof(a[0]);
    printf("number of elements in array= %d",count);
    return 0;
}