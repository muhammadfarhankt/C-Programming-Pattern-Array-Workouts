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

    // Remove prime numbers
    for (i = 0; i < size; i++) {
        if (arr[i] < 2) {
            flag = 1; // 0 and 1 are not prime
        } else {
            flag = 0;
            for (j = 2; j <= arr[i]/2; j++) {
                if (arr[i] % j == 0) {
                    flag = 1; // It is not a prime number
                    break;
                }
            }
        }

        if (flag == 0) {
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size = size - 1;
            i--; // To recheck the current index after shifting
        }
    }

    printf("Array after removing prime numbers: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
