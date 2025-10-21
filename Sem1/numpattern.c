#include<stdio.h>
void main()
{
    int n,i,j,k,l;
    printf("Enter number:");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        printf("%d ",n);
        for(j=n;j>n-i;j--)
        {
        printf("%d ",j);
        }
        for(k=n;k>1;k--)
        {
            for(l=1;l<k;l++)
            {
                printf("%d ",k);
            }
        }
        printf("%d\n",n);
    }
    for(i=n;i>0;i--)
    {
        printf("%d ",n);
        for(j=n-1;j>n-i;j--)
        {
        printf("%d ",j);
        }
        for(k=1;k<n-i;k++)
        {
            printf("%d ",k);
        }
        printf("%d\n",n);
    }
}