Video 3: Basic Number patterns
Explain again concepts of row and columns

Basic column number pattern
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


H/W 3: Row number pattern
Explain row concept again
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

Pattern with incrementing numbers
1  
1  2  
1  2  3  
1  2  3  4  
1  2  3  4  5  

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


H/W 4: Pattern with incrementing rows and constant columns
1  
2  2  
3  3  3  
4  4  4  4  
5  5  5  5  5  

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}



Decreasing Number Pattern
5  
4  5  
3  4  5  
2  3  4  5  
1  2  3  4  5  
  
#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = rows; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

  

H/W 5: Decreasing row number pattern
5  
5  4  
5  4  3  
5  4  3  2  
5  4  3  2  1  
  
#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


H/W 6: Pattern with incrementing rows and columns (left-aligned)
1  
1  2  
1  2  3  
1  2  3  4  
1  2  3  4  5  
1  2  3  4  
1  2  3  
1  2  
1  

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}



