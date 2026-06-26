#include <stdio.h>
int main() {
    int n, key, i, found = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) { found = i; break; }
    }
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not found\n");
    return 0;
}
