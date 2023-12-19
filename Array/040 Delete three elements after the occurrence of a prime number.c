#include <stdio.h>

int main() {
    int arr[100], size, flag, i, j;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        flag = 0;

        // Skip 1 as it is not a prime number
        if (arr[i] == 1) {
            flag = 1;
        }

        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            if (i == size - 1) {
                size = size;
            } else if (i == size - 2) {
                size = size - 1;
            } else if (i == size - 3) {
                size = size - 2;
            } else {
                for (j = i; j < size-3; j++) {
                    arr[j+1] = arr[j + 4];
                }
                size = size - 3;
            }
        }
    }

    printf("Array after deleting three elements after the occurrence of a prime number: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
