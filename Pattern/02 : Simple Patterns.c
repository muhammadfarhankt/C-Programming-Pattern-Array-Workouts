Video 2: Simple Patterns

Code in VS Code and stop execution by line by line for understanding
Concept of rows and Columns
Explain 2D matrix

Square Star pattern 
*  *  *  *  
*  *  *  *  
*  *  *  *  
*  *  *  *
  
// Increasing Pattern
*
* *
* * *
* * * *
* * * * * 
  
#include <stdio.h>
int main() {
    int rows;
    printf("Enter Number of rows : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Increasing by double 
* * 
* * * *
* * * * * *
* * * * * * * * 

#include <stdio.h>
int main() {
    int rows;
    printf("Enter Number of rows : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2 * i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


H/W 1:  Increase by triple (multiples of 3)

Star Pattern decreasing

Explain concepts of (- -) decrement operator, >= in condition etc (if <= used which lead to infinite loop)

* * * * 
* * * 
* *
*

#include <stdio.h>
int main() {
    int rows;
    printf("Enter Number of rows : ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


H/W 2:  (Decrementing by 2)

*  *  *  *  *  *  *  *  
*  *  *  *  *  *  
*  *  *  *  
*  *

#include <stdio.h>
int main() {
    int rows;
    printf("Enter Number of rows : ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= 2 * i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

  
H/W 3 (Explain rows till center then another loop for decrementing)

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

#include <stdio.h>
int main() {
    int rows;
    printf("Enter Number of rows : ");
    scanf("%d", &rows);

    // Upper half of the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
