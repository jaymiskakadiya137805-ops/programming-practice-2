//merge two arrays
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];

    // Copy first array
    for(int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Print merged array
    for(int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
