#include <stdio.h>

int main() {
    int num[20], size, i, min;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    min = num[0];

    for (i = 1; i < size; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Smallest element in the array is : %d", min);

    return 0;
}
