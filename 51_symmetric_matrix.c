#include <stdio.h>
int main() {
    int n, i, j, sym = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < n && sym; i++)
        for (j = 0; j < n && sym; j++)
            if (a[i][j] != a[j][i]) sym = 0;
    printf(sym ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}
