#include <stdio.h>
#include <stdlib.h>

// Function to create a new dynamic array with initial size
double* createDynamicArray(int initialSize) {
    double* arr = (double*)malloc(initialSize * sizeof(double));
    if (arr == NULL) {
        printf("Error: unable to allocate memory\n");
        exit(1);
    }
    return arr;
}

// Function to extend the dynamic array
double* extendDynamicArray(double* arr, int initialSize, int newSize) {
    double* newArr = (double*)realloc(arr, newSize * sizeof(double));
    if (newArr == NULL) {
        printf("Error: unable to extend array\n");
        exit(1);
    }
    return newArr;
}

// Function to release the dynamic array
void releaseDynamicArray(double* arr) {
    free(arr);
}

int main() {
    int initialSize, newSize;
    double* arr;

    // Accept initial size from user
    printf("Enter initial size of the dynamic array: ");
    scanf("%d", &initialSize);

    // Create dynamic array with initial size
    arr = createDynamicArray(initialSize);

    // Print initial array size
    printf("Initial array size: %d\n", initialSize);

    // Accept new size from user
    printf("Enter new size of the dynamic array: ");
    scanf("%d", &newSize);

    // Extend dynamic array to new size
    arr = extendDynamicArray(arr, initialSize, newSize);

    // Print new array size
    printf("New array size: %d\n", newSize);

    // Release the dynamic array
    releaseDynamicArray(arr);

    return 0;
}