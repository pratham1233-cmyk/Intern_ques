#include <stdio.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char s[n][100], temp[100];
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", s[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int k = 0;
            while (s[j][k] != '\0' && s[j+1][k] != '\0' && s[j][k] == s[j+1][k]) k++;
            if (s[j][k] > s[j+1][k]) {
                int t = 0;
                while ((temp[t] = s[j][t]) != '\0') t++;
                t = 0;
                while ((s[j][t] = s[j+1][t]) != '\0') t++;
                t = 0;
                while ((s[j+1][t] = temp[t]) != '\0') t++;
            }
        }
    }
    printf("Sorted:\n");
    for (int i = 0; i < n; i++) printf("%s\n", s[i]);
    return 0;
}
