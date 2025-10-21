#include <stdio.h>
void insert(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++; 
}
void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; 
}
int main() {
    int arr[10] = {1, 2, 4, 5};
    int n = 4;
    int pos = 2;
    int value = 3;
    printf("Before insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insert(arr, &n, pos, value);
    printf("After insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    pos = 2;
    printf("Before deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    deleteElement(arr, &n, pos);
    printf("After deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}