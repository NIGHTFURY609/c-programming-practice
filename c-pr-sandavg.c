#include<stdio.h>
int main()
{
    int sum=0,n,a[10],average;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for (int i=0;i<n;i++)
    {
        
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    average=sum/n;
    printf("the average is=%d",average);
    return 0;
}