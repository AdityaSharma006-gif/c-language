// program to transpose a matrix
#include <stdio.h>

int main(void) {
    int i, j, row, column;
    int a[2][2] = {{10, 20}, {30, 40}};
    int b[2][2];
    row = 2;
    column = 2;

    printf("\n matrix before transpose:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /* compute transpose */
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("\n matrix after transpose:\n");
    for (i = 0; i < column; i++) {        // note: rows/cols swapped for b
        for (j = 0; j < row; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
