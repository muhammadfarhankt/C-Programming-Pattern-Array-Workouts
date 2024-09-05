//The majority element is the element that appears more than ⌊n / 2⌋ times

#include <stdio.h>

int main() {
    int arr[100], size, i, j;
    int maxCount = 0, majorityElement = -1;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the majority element
    for (i = 0; i < size; i++) {
        int count = 0;
        for (j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > size / 2) {
            majorityElement = arr[i];
            break;
        }
    }

    // Print the result
    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("There is no majority element.\n");
    }

    return 0;
}
