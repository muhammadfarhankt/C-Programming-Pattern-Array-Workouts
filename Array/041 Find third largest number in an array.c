// Assuming all elements are unique
#include <stdio.h>

int main() {
    int arr[100], size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to store first, second, and third largest numbers
    int firstMax, secondMax, thirdMax;

    // Find first, second, and third maximum values from the first three elements
    if (arr[0] > arr[1]) {
        if (arr[0] > arr[2]) {
            firstMax = arr[0];
            if (arr[1] > arr[2]) {
                secondMax = arr[1];
                thirdMax = arr[2];
            } else {
                secondMax = arr[2];
                thirdMax = arr[1];
            }
        } else {
            firstMax = arr[2];
            secondMax = arr[0];
            thirdMax = arr[1];
        }
    } else {
        if (arr[1] > arr[2]) {
            firstMax = arr[1];
            if (arr[0] > arr[2]) {
                secondMax = arr[0];
                thirdMax = arr[2];
            } else {
                secondMax = arr[2];
                thirdMax = arr[0];
            }
        } else {
            firstMax = arr[2];
            secondMax = arr[1];
            thirdMax = arr[0];
        }
    }

    // Find the third maximum value from index 3 onwards
    for (int i = 3; i < size; i++) {
        if (arr[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax) {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if (arr[i] > thirdMax) {
            thirdMax = arr[i];
        }
    }

    // Print the third largest number
    printf("The third largest number is: %d\n", thirdMax);

    return 0;
}
