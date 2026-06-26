#include <stdio.h>
int main() {
    int n, i, j, flag;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
