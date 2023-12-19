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

    // Find prime number and delete two elements after its occurrence
    for (i = 0; i < size; i++) {
        flag = 1;
        if (arr[i] == 1) {
            flag = 0; // 1 is not a prime number
        } else {
            for (j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    flag = 0; // It is not a prime number
                    break;
                }
            }
        }

        if (flag == 1) {
            // If the prime number is at the last position, no need to delete
            if (i == size - 1) {
                size = size;
            }
            // If the prime number is at the second-to-last position, delete one element
            else if (i == size - 2) {
                size = size - 1;
            }
            // If the prime number is at any other position, delete two elements
            else {
                for (j = i; j < size; j++) {
                    arr[j + 1] = arr[j + 3];
                    arr[j + 2] = arr[j + 4];
                }
                size = size - 2;
            }
        }
    }

    // Print the array after deletion
    printf("Array after deleting two elements after the occurrence of a prime number: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
