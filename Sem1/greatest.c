#include<stdio.h>
void main()
{
    int n;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&n);
    int a[n];
    int i=0;
    while(i<n)
    {
        printf("Enter values:");
        scanf(" %d",&a[i]);
        i++;
    }
    int max=a[0];
    i=1;
    while(i<n)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        i++;
    }printf("%d is greatest\n",max);
}