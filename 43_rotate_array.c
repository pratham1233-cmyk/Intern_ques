#include <stdio.h>
int main() {
    int n, k, i, dir, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Rotate left(0) or right(1): ");
    scanf("%d", &dir);
    printf("Rotate by how many positions: ");
    scanf("%d", &k);
    k = k % n;
    if (dir == 1) k = n - k;
    for (i = 0; i < k; i++) {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++) arr[j] = arr[j + 1];
        arr[n - 1] = temp;
    }
    printf("After rotation: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
