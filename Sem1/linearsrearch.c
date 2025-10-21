#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // return the index of the found element
        }
    }
    return -1; // return -1 if the element is not found
}

int main() {
    int arr[] = {5, 9, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, size, target);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}