#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter array A: ");
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    printf("Enter array B: ");
    for (int i = 0; i < n; i++) scanf("%d", b + i);
    for (int i = 0; i < n; i++) {
        int t = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = t;
    }
    printf("Array A after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", *(a + i));
    printf("\nArray B after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", *(b + i));
    printf("\n");
    return 0;
}
