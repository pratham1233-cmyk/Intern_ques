#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    long long sum = 0;
    for (i = 0; i < n; i++) sum += arr[i];
    printf("Sum: %lld\nAverage: %.2f\n", sum, (float)sum / n);
    return 0;
}
