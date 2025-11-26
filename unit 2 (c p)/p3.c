// program to insert an element to sorted array in order
#include <stdio.h>
int main() {
    int a[5]={10,20,30,40,50};
   int element,n=5,i;
   printf("enter element to insert");
   scanf("%d",&element);
for(i=n-1;i>=0&&a[i]>element;i--)
a[i+1]=a[i];
a[i+1]=element;
n=n+1;
printf("after insertion \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
    return 0;
}