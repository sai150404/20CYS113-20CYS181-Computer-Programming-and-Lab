#include <stdio.h>

int main() {
    int x, y;
    int i, j, k;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int A[x][y];
    int B[x][y];
    
    for (i = 0; i < x; i++) {
        for (j = 0; j <y; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (i = 0; i <x; i++) {
        for (j = 0; j < y; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int result[x][y];
    
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            result[i][j] = 0;
            for (k = 0; k < y; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
