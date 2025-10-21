#include<stdio.h>
int min(int * p,int x)
{
    int z=*p;
    for(int i=1;i<x;i++)
    {
        if(z>*(p+i))
        z=*(p+i);
    }
    return z;
}
int max(int * p,int x)
{
    int z=*p;
    for(int i=1;i<x;i++)
    {
        if(z<*(p+i))
        z=*(p+i);
    }
    return z;
}
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
    int c=min(&a,n);
    int d=max(&a,n);
    printf("min is %d\n",c);
    printf("max is %d\n",d);
}