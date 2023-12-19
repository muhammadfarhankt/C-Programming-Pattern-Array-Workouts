#include <stdio.h>
#include <stdbool.h>

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

    printf("Prime numbers in the array: ");
    // Loop to find prime numbers
    for (i = 0; i < size; i++) {
        flag = 0; // Reset flag for each new number
        if (arr[i] == 1) {
            flag = 1; // 1 is not prime, set flag and skip to the next iteration
            continue;
        }

        // Loop to check for prime numbers
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1; // Set flag if the number is divisible by any other number
                break;
            }
        }

        // If flag remains 0, the number is prime and is printed
        if (flag == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
