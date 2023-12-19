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

    // Replace prime numbers with their index positions
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

        // If the number is prime, replace it with its index position
        if (flag == 1) {
            arr[i] = i;
        }
    }

    // Print the modified array
    printf("Array after replacing prime numbers with their index positions: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
