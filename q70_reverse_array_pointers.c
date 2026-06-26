#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", arr + i);
    int *left = arr, *right = arr + n - 1;
    while (left < right) {
        int t = *left;
        *left = *right;
        *right = t;
        left++;
        right--;
    }
    printf("Reversed: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
