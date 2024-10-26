/* for 2d matrics a,b,c,d characters*/
#include <stdio.h>

int detd(int matrix[2][2]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

int main() {
    int matrix[2][2];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = detd(matrix);
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}
