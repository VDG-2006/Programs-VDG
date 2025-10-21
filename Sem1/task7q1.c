#include<stdio.h>
void main()
{
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n],sum=0,i=0;
    printf("Enter Elements:");
    for(;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is %d\n",sum);
}