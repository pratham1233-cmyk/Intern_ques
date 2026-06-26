#include <stdio.h>
int main() {
    int n1, n2, i;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements: ");
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    int b[n2], merged[n1 + n2];
    printf("Enter elements: ");
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (i = 0; i < n1; i++) merged[i] = a[i];
    for (i = 0; i < n2; i++) merged[n1 + i] = b[i];
    printf("Merged: ");
    for (i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
