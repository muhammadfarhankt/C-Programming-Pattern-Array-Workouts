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

    int firstMin, secondMin;

    // Initialize firstMin and secondMin based on the first two elements
    if (arr[0] < arr[1]) {
        firstMin = arr[0];
        secondMin = arr[1];
    } else {
        firstMin = arr[1];
        secondMin = arr[0];
    }

    // Traverse the array to find the second smallest element
    for (i = 2; i < size; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }

    // Print the second smallest element
    printf("The second smallest element is: %d\n", secondMin);

    return 0;
}
