#include <stdio.h>

int main() {
    int num[20], size, i, sumOdd = 0;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);

        // Check if the number is odd
        if (num[i] % 2 != 0) {
            sumOdd += num[i];
        }
    }

    printf("Sum of odd numbers is : %d", sumOdd);

    return 0;
}
