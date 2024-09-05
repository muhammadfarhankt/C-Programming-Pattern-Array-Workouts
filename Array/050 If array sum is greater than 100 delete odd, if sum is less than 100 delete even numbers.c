#include <stdio.h>

int main() {
    int arr[100], size, sum = 0, i, j;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Calculate the sum
    }

    // Print the sum
    printf("The sum of the array elements is: %d\n", sum);

    // Based on the sum, either delete odd or even numbers
    if (sum > 100) {
        // Delete odd numbers
        printf("Sum is greater than 100, deleting odd numbers...\n");
        for (i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {  // If the element is odd
                // Shift the elements to delete the odd number
                for (j = i; j < size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                size--;  // Decrease the size of the array
                i--;     // Recheck the current index after deletion
            }
        }
    } else {
        // Delete even numbers
        printf("Sum is less than or equal to 100, deleting even numbers...\n");
        for (i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {  // If the element is even
                // Shift the elements to delete the even number
                for (j = i; j < size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                size--;  // Decrease the size of the array
                i--;     // Recheck the current index after deletion
            }
        }
    }

    // Print the modified array
    printf("Modified array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
