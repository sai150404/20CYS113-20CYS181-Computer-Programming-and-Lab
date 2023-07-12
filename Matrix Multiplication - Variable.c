#include <stdio.h>

int main() {
    int row, column;
    scanf("%d%d", &row, &column); 

    int inp1[row][column];
    int inp2[row][column];
    int inp3[row][column]; 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &inp1[i][j]);
        }
    } 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &inp2[i][j]);
        }
    } 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            inp3[i][j] = 0;
            for (int k = 0; k < column; k++) {
                inp3[i][j] += inp1[i][k] * inp2[k][j];
            }
        }
    } 

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", inp3[i][j]);
        }
        printf("\n");
    } 

    return 0;
}
