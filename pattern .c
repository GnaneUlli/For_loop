/* pyramid pattern */

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
  
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
      
        for (j = 1; j <= rows - i; j++) {
          
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
          
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/* Square pattern */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/* diamon pattern */

#include <stdio.h>

int main() {
    int rows, space, count = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        count = 0;
        while (count != 2 * i - 1) {
            printf("*");
            count++;
        }
        printf("\n");
        space--;
    }

    space = 1;

    for (int i = 1; i <= rows - 1; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        count = 0;
        while (count != 2 * (rows - i) - 1) {
            printf("*");
            count++;
        }
        printf("\n");
        space++;
    }

    return 0;
}

