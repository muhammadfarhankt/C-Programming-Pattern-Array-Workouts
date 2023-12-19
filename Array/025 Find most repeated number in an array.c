#include <stdio.h>

int main() {
    int arr[100], i, j, count, maxCount, mostRepeated, size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    maxCount = 0; // Initialize the maximum count
    mostRepeated = arr[0]; // Assume the first element is the most repeated initially

    // Loop to find the most repeated number
    for (i = 0; i < size; i++) {
        count = 1; // Reset count for each new element
        for (j = i + 1; j < size; j++) {
            // Check if the current element matches any other element
            if (arr[i] == arr[j]) {
                count++; // Increment count for each occurrence of the element
            }
        }
        // Update mostRepeated if a new most repeated number is found
        if (count > maxCount) {
            maxCount = count;
            mostRepeated = arr[i];
        }
    }

    // Print the most repeated number and its count
    printf("Most repeated number: %d (Count: %d)\n", mostRepeated, maxCount);

    return 0;
}
