#include <stdio.h>

int main() {
    int arr1[20], arr2[20], mergedArr[40], size1, size2, sizeMerged, i, j, k;

    // Input size of the first array
    printf("Enter size of the first array : ");
    scanf("%d", &size1);

    // Input elements of the first array
    printf("Enter the elements of the first array : ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter size of the second array : ");
    scanf("%d", &size2);

    // Input elements of the second array
    printf("Enter the elements of the second array : ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge and sort the arrays
    sizeMerged = size1 + size2;
    i = j = k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }

    // Print the merged and sorted array
    printf("Merged and sorted array : ");
    for (i = 0; i < sizeMerged; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
