//c program for dynamic malloc and free
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;
    arr=(int*)malloc(5*sizeof(int));
    int sum=0;
    for(i=0;i<5;i++)
{  arr[i]=10+sum;
        sum=arr[i];     }
    for(i=0;i<5;i++)
{
        printf("%d\n",arr[i]);
}
    return 0;
}