#include <stdio.h>

int main() {
    int arr[100], i, j, size, flag, isUnique;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find unique non-prime numbers
    printf("Unique non-prime numbers in the array : ");
    for (i = 0; i < size; i++) {
        flag = 1;
        if (arr[i] == 1) {
            flag = 0; // 1 is not a prime number
        } 
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 0; // It is not a prime number
                break;
            }
        }

        // Print the number if it is unique and non-prime
        if (flag == 0) {
            // Check if the number is unique
            isUnique = 1;
            for (int k = 0; k < size; k++) {
                if (i != k && arr[i] == arr[k]) {
                    isUnique = 0; // Found a duplicate
                    break;
                }
            }

            if (isUnique == 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
