#include <stdio.h>

int main() {
    int num[20], size, i, countOdd = 0;
    float sum = 0, avg;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 1) {
            sum += num[i];
            countOdd++;
        }
    }
    if (countOdd == 0) {
        printf("No odd numbers entered, cannot calculate average.");
    } else {
        avg = sum / countOdd;
        printf("Average of odd numbers is : %f", avg);
    }
    return 0;
}

