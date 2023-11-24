//Assume no elements repeating
#include <stdio.h>

int main() {
    int arr[20], size, i;
    
    // Input size of the array
    printf("Enter size of the array : ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements of the array : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int firstMax, secondMax;

    // Initialize firstMax and secondMax based on the first two elements
    if (arr[0] > arr[1]) {
        firstMax = arr[0];
        secondMax = arr[1];
    } else {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    // Traverse the array to find the second largest element
    for (i = 2; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    // Print the second largest element
    printf("The second largest element is: %d\n", secondMax);

    return 0;
}
