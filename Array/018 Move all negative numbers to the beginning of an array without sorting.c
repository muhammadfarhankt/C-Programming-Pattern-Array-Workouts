#include <stdio.h>

int main() {
    int arr[20], size, i, j, temp;

    // Input array size
    printf("Enter Array Size : ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Move negative numbers to the beginning without changing order
    j = 0; // Initialize index for negative numbers
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            // Shift elements to make space for the negative number
            temp = arr[i];
            for (int k = i; k > j; k--) {
                arr[k] = arr[k - 1];
            }
            arr[j] = temp;
            j++;
        }
    }

    // Print the array after moving negative numbers to the beginning
    printf("Array after moving negative numbers to the beginning: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
