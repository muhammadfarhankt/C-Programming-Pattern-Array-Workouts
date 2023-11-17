#include <stdio.h>
int main() {
    int arr[20], size, i, pos, newValue;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert new value : ");
    scanf("%d", &pos);
    printf("Enter the new value : ");
    scanf("%d", &newValue);
    // Shift elements to make space for the new value
    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value at the specified position
    arr[pos] = newValue;
    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
