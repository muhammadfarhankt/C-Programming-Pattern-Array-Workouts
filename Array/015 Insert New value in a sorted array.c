#include <stdio.h>
int main() {
    int arr[20], size, i, newValue;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements (in ascending order) : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new value : ");
    scanf("%d", &newValue);
    // Find the position to insert the new value
    for (i = 0; i < size; i++) {
        if (arr[i] > newValue) {
            break;
        }
    }
    // Shift elements to make space for the new value
    for (int j = size; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    // Insert the new value at the specified position
    arr[i] = newValue;
    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
