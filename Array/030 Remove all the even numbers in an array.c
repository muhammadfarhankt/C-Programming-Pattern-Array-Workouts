#include <stdio.h>

int main() {
    int arr[100], i, j, size;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Remove even numbers
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            for (j = i; j<size-1; j++) {
                arr[j] = arr[j+1];
            }
            size = size-1;
            i--; // To recheck the current index after shifting
        }
    }

    printf("Array after removing even numbers: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
