#include <stdio.h>

int main() {
    int num[20], size, i, countEven = 0;
    float sum = 0, avg;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            sum += num[i];
            countEven++;
        }
    }
    if (countEven == 0) {
        printf("No even numbers entered, cannot calculate average.");
    } else {
        avg = sum / countEven;
        printf("Average of even numbers is : %f", avg);
    }
    return 0;
}
