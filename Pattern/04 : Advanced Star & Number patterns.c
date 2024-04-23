Video 4: Star & Number patterns

*1 - 1 (1-1)*2+1=1
* * *3 -2 - (2-1)*2+1=3
* * * * *5 - (3-1)*2+1= 5
* * * * * * *7
* * * * * * * * *9

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (i*2-1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


H/W 6 :
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= (i*2-1); j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


Controlling using extra variable
1   
2   3   
4   5   6   
7   8   9   10   
11   12   13   14   15

#include <stdio.h>
int main() {
    int rows, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // printf("%d ", num++); post increment
            printf("%d ", num);
            num++; // num = num + 1;
        }
        printf("\n");
    }

    return 0;
}


50
45  40
35  30  25
20  15  10  5
  
#include <stdio.h>
int main() {
    int rows, num;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    num = rows * (rows+1) * 5 / 2; //num = 50; for 4 rows
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d  ", num);
            num -= 5; // num = num - 5;
        }
        printf("\n");
    }

    return 0;
}


H/W 7
1 - 1  2  3
2 - 6  5  4
3 - 7  8  9

  
H/W 8
1
3    2
4    5    6
11  10   8   7

