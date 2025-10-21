#include<stdio.h>
void selectionSort(int arr[], int size)
{
    int x;
    for(int i=0;i<size;i++)
    {
        x=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[x]>arr[j])
            x=j;
        }
        if(x==i)
        continue;
        int t=arr[i];
        arr[i]=arr[x];
        arr[x]=t;
    }
}
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Array before sorting:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    selectionSort(arr,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}