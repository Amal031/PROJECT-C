#include <stdio.h>
void main() {
    int n = 3;
    int a[3][3] = {{2, 7, 6} , {9, 5, 1} , {4, 3, 8}};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    int magic = n * (n * n + 1) / 2;
    int d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++) {
        int s = 0, s1 = 0;
        for (int j = 0; j < n; j++) {
            s += a[i][j];     // row sum
            s1 += a[j][i];    // col sum
        }
        if (s != magic || s1 != magic) {
            printf("Not a magic matrix\n");
            return 0;
        }
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    if (d1 == magic && d2 == magic)
        printf("Magic matrix\n");
    else
        printf("Not a magic matrix\n");
}
