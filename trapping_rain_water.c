#include <stdio.h>

int main() {
    int n;
    printf("Enter number of bars: ");
    scanf("%d", &n);
    int h[n];
    printf("Enter heights: ");
    for (int i = 0; i < n; i++) scanf("%d", &h[i]);
    int left[n], right[n];
    left[0] = h[0];
    for (int i = 1; i < n; i++) left[i] = left[i-1] > h[i] ? left[i-1] : h[i];
    right[n-1] = h[n-1];
    for (int i = n-2; i >= 0; i--) right[i] = right[i+1] > h[i] ? right[i+1] : h[i];
    int water = 0;
    for (int i = 0; i < n; i++) {
        int minH = left[i] < right[i] ? left[i] : right[i];
        water += minH - h[i];
    }
    printf("Total water trapped: %d\n", water);
    return 0;
}
