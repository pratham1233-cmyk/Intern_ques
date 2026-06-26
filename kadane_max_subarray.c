#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int maxSum = arr[0], currSum = arr[0];
    int start = 0, end = 0, tempStart = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > currSum + arr[i]) {
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum += arr[i];
        }
        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }
    printf("Max subarray sum: %d (from index %d to %d)\n", maxSum, start, end);
    return 0;
}
