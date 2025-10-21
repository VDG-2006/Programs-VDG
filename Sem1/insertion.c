#include<stdio.h>
void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertionSort(arr,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}