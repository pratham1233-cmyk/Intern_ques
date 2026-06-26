#include <stdio.h>

int knows(int a, int b, int matrix[][10]) {
    return matrix[a][b];
}

int main() {
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter knows matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int top = 0;
    for (int i = 1; i < n; i++)
        if (knows(top, i, matrix)) top = i;
    int celeb = 1;
    for (int i = 0; i < n; i++) {
        if (i != top && (knows(top, i, matrix) || !knows(i, top, matrix))) {
            celeb = 0; break;
        }
    }
    if (celeb) printf("Celebrity: Person %d\n", top);
    else printf("No celebrity found\n");
    return 0;
}
