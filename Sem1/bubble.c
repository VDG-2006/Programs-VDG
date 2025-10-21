#include<stdio.h>
void bubbleSort(int arr[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
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
    bubbleSort(arr,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}