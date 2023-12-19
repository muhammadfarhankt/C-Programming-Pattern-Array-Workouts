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

    // Remove prime numbers > 50 and non-prime numbers
    for (i = 0; i < size; i++) {
        flag = 1;
        if (arr[i] == 1) {
            flag = 0;
        }
            for (j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    flag = 0; // It is not a prime number
                    break;
                }
            }
        if (flag == 0 || (flag == 1 && arr[i] > 50 ) ) {
                // Shift elements to the left starting from the current position
                for (int k = i; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrease the size of the array
                i--; // Recheck the current index after shifting
            }
        }

    // Print the array after removing prime numbers > 50 and non-prime numbers
    printf("Array after removing prime numbers > 50 and non-prime numbers: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
