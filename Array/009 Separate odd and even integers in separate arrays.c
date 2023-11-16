#include <stdio.h>

int main() {
    int num[20], size, i;
    int even[20], odd[20];
    int evenCount = 0, oddCount = 0;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);

        // Separate even and odd numbers
        if (num[i] % 2 == 0) {
            even[evenCount] = num[i];
            evenCount++;
        } else {
            odd[oddCount] = num[i];
            oddCount++;
        }
    }

    printf("Even numbers: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
