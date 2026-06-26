#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int src[n], dest[n];
    int *p = src, *q = dest;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    for (int i = 0; i < n; i++) *(q + i) = *(p + i);
    printf("Copied array: ");
    for (int i = 0; i < n; i++) printf("%d ", *(q + i));
    printf("\n");
    return 0;
}
