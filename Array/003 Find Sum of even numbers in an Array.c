#include <stdio.h>

int main() {
    int num[20], size, i, sumEven = 0;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    // Check if the number is even
    for (i = 0; i < size; i++) {
        if (num[i] % 2 == 0) {
            sumEven += num[i];
        }
    }

    printf("Sum of even numbers is : %d", sumEven);

    return 0;
}
