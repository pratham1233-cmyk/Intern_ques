#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements (0s, 1s, 2s): ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int lo = 0, mid = 0, hi = n - 1;
    while (mid <= hi) {
        if (arr[mid] == 0) {
            int t = arr[lo]; arr[lo] = arr[mid]; arr[mid] = t;
            lo++; mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int t = arr[mid]; arr[mid] = arr[hi]; arr[hi] = t;
            hi--;
        }
    }
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
