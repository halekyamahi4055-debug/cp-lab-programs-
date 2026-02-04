//c program for dynamic calloc and free
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;
    arr=(int*)calloc(5,sizeof(int));
    for(i=0;i<5;i++)
{  
        printf("%d\n",arr[i]);
}
    return 0;
}