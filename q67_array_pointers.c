#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
