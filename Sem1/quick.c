#include<stdio.h>
int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int t=arr[start];
            arr[start]=arr[end];
            arr[end]=t;
        }
    }
    arr[lb]=arr[end];
    arr[end]=pivot;
    return end;
}
void quickSort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
    int loc=partition(arr,lb,ub);
    quickSort(arr,lb,loc-1);
    quickSort(arr,loc+1,ub);
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
    quickSort(arr,0,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}