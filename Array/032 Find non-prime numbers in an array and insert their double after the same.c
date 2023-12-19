#include <stdio.h>

int main() {
    int arr[100], i, size, flag;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find non-prime numbers and insert their double after the same element
    for (i = 0; i < size; i++) {
        flag = 1; // Assume the number is prime

        // Special case for 1, as it is not a prime number
        if (arr[i] == 1) {
            flag = 0;
        }

        // Check if the number is prime or not
        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 0; // The number is not prime
                break;
            }
        }

        // If the number is not prime, insert double after the same element
        if (flag == 0) {
            // Shift all elements to the right starting from the end
            for (int k = size; k > i; k--) {
                arr[k] = arr[k - 1];
            }

            arr[i + 1] = arr[i] * 2; // Insert double after non-prime element
            size++; // Increment the size of the array
            i++; // Skip the next element as it has been shifted
        }
    }

    // Print the modified array
    printf("Array after inserting double after non-prime numbers: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
