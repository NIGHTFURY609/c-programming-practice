#include<stdio.h>
int main()
{
    int sum=0,n,a[10],average;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("enter the element%d:\n",i+1);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    average=sum/n;
    printf("the average is=%d",average);
    return 0;
}