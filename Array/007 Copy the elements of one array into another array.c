#include <stdio.h>

int main() {
    int arr1[20], arr2[20], size, i;
    
    printf("Enter Array Size : ");
    scanf("%d", &size);
    
    printf("Enter the array elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("Array 2 Elements : ");
    
    for (i = 0; i < size; i++) {
        printf("%d\t",arr2[i]);
    }

    return 0;
}

//Copying when reading array itself
// for (i = 0; i < size; i++) {
//         scanf("%d", &arr1[i]);
//         arr2[i] = arr1[i];
// }