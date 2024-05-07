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

    // Initialize variables to store first, second, and third smallest numbers
    int firstMin, secondMin, thirdMin;

    // Find first, second, and third minimum values from the first three elements
    if (arr[0] < arr[1]) {
        if (arr[0] < arr[2]) {
            firstMin = arr[0];
            if (arr[1] < arr[2]) {
                secondMin = arr[1];
                thirdMin = arr[2];
            } else {
                secondMin = arr[2];
                thirdMin = arr[1];
            }
        } else {
            firstMin = arr[2];
            secondMin = arr[0];
            thirdMin = arr[1];
        }
    } else {
        if (arr[1] < arr[2]) {
            firstMin = arr[1];
            if (arr[0] < arr[2]) {
                secondMin = arr[0];
                thirdMin = arr[2];
            } else {
                secondMin = arr[2];
                thirdMin = arr[0];
            }
        } else {
            firstMin = arr[2];
            secondMin = arr[1];
            thirdMin = arr[0];
        }
    }

    // Find the third smallest value from index 3 onwards
    for (int i = 3; i < size; i++) {
        if (arr[i] < firstMin) {
            thirdMin = secondMin;
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin) {
            thirdMin = secondMin;
            secondMin = arr[i];
        } else if (arr[i] < thirdMin) {
            thirdMin = arr[i];
        }
    }

    // Print the third smallest number
    printf("The third smallest number is: %d\n", thirdMin);

    return 0;
}
