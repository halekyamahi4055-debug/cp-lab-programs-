//c program for dynamic realloc and free
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i;
    arr=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
{    arr[i]=i+1;     }
    arr=(int*)realloc(arr,7*sizeof(int));
    for(i=5;i<7;i++)
{   arr[i]=i+1;   }
for(i=0;i<7;i++)
printf("%d\n",arr[i])
    free(arr);
    return 0;
}