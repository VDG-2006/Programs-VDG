#include <stdio.h>

int binarySearch(int arr[], int beg, int end, int val) {
    if (end >= beg) {
        int mid = (beg + end) / 2;

        if (arr[mid] == val)
            return mid;

        if (arr[mid] > val)
            return binarySearch(arr, beg, mid - 1, val);

        return binarySearch(arr, mid + 1, end, val);
    }

    return -1;
}

int main() {
    int arr[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 40;

    int res = binarySearch(arr, 0, n - 1, val);

    printf("The elements of the array are - ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Element to be searched is - %d", val);

    if (res == -1)
        printf("\nElement is not present in the array");
    else
        printf("\nElement is present at %d position of array", res + 1);

    return 0;
}