#include <stdio.h>

int main() {
    int arr[100], size, i, j, count, sum = 0, uniqueCount = 0, isUnique;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements: ");
    // Loop to find unique elements and calculate their sum
    for (i = 0; i < size; i++) {
        isUnique = 1; // Assume the current element is unique
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = 0; // If a duplicate is found, mark it as not unique
                break;
            }
        }

        // If the element is unique, print it and add to sum and count it
        if (isUnique) {
            printf("%d ", arr[i]);
            sum += arr[i];
            uniqueCount++;
        }
    }

    // Calculate and print the average of unique elements
    if (uniqueCount > 0) {
        float average = (float)sum / uniqueCount;
        printf("\nAverage of unique elements: %.2f\n", average);
    } else {
        printf("\nNo unique elements found.\n");
    }

    return 0;
}
