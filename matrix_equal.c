#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    printf("Enter matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    int equal = 1;
    for (int i = 0; i < r && equal; i++)
        for (int j = 0; j < c && equal; j++)
            if (a[i][j] != b[i][j]) equal = 0;
    printf(equal ? "Matrices are equal\n" : "Matrices are not equal\n");
    return 0;
}
