#include <stdio.h>

int main() {
    int arr[100], size;
    int sumPrime = 0, countPrime = 0;
    int sumNonPrime = 0, countNonPrime = 0;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum and count of prime and non-prime numbers
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int isPrime = 1; // Assume the number is prime

        // Check if the number is prime
        if (num <= 1) {
            isPrime = 0; // Numbers less than or equal to 1 are not prime
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; // Number is not prime
                    break;
                }
            }
        }

        // Update sum and count based on prime or non-prime
        if (isPrime) {
            sumPrime += num;
            countPrime++;
        } else {
            sumNonPrime += num;
            countNonPrime++;
        }
    }

    // Calculate average of prime and non-prime numbers
    float avgPrime = countPrime > 0 ? (float)sumPrime / countPrime : 0;
    float avgNonPrime = countNonPrime > 0 ? (float)sumNonPrime / countNonPrime : 0;

    // Print the averages
    printf("Average of prime numbers: %.2f\n", avgPrime);
    printf("Average of non-prime numbers: %.2f\n", avgNonPrime);

    return 0;
}
