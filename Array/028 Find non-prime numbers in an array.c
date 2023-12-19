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

    printf("Non-prime numbers in the array: ");
    // Loop to find non-prime numbers
    for (i = 0; i < size; i++) {
        if (arr[i] == 1) {
            printf("%d ", arr[i]); // 1 is not prime
            continue; // Skip prime checking when the number is 1
        }

        // Loop to check for prime numbers
        flag = 0; // Reset flag for each new number
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1; // Set flag if the number is divisible by any other number
                break;
            }
        }

        // If flag is 1, the number is non-prime and is printed
        if (flag == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
