#include <stdio.h>
int main() {
    int n, pos, val, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position (0-indexed) and value: ");
    scanf("%d %d", &pos, &val);
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    printf("After insert: ");
    for (i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
