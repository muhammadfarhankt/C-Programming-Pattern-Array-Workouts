5: Alphabet Patterns
Concepts ASCII 
a - 97
A - 65

A 
A  B 
A  B  C 
A  B  C  D 
A  B  C  D  E  

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            printf("%c  ", ch + j);
        }
        printf("\n");
    }
    return 0;
}


A
1  1
B  B   B
2   2   2  2

H/W 9

A
A   2 
A   2   C
A   2   C  4

HW 10

A
A  1  
A  1  B
A  1  B  2

Concept of input a string from user and find it’s length

