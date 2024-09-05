#include <stdio.h>

int main() {
    int arr[100], size, pos, i;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left to overwrite the element at 'pos'
        for (i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Reduce array size by 1
        size--;

        // Print the array after deletion
        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
