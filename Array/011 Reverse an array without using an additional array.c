#include <stdio.h>

int main() {
    int num[20], size, i, temp;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }
    // Reverse the array
    for (i = 0; i < size / 2; i++) {
        temp = num[i];
        num[i] = num[size - 1 - i];
        num[size - 1 - i] = temp;
    }
    // Print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}
