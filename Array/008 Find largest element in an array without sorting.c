#include <stdio.h>

int main() {
    int num[20], size, i, max;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 1; i < size; i++) {
        if( num[i] > max ) {
            max = num[i];
        }
    }
    printf("Largest element in the array is : %d", max);

    return 0;
}
