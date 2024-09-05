#include <stdio.h>

int main() {
    int arr[100], i, j, size, flag;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to replace prime numbers by 0 and even numbers by 1
    for (i = 0; i < size; i++) {
        flag = 0;

        // Check if the number is prime
        if (arr[i] == 1) {
            flag = 1; // 1 is not a prime number
        }

        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1; // Not prime
                break;
            }
        }

        if (flag == 0) {
            // Replace prime numbers with 0
            arr[i] = 0;
        } else if (arr[i] % 2 == 0) {
            // Replace even numbers with 1
            arr[i] = 1;
        }
    }

    // Output the modified array
    printf("Modified array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
