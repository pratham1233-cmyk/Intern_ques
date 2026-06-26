#include <stdio.h>

int main() {
    char s[200], result[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            result[j++] = s[i];
    result[j] = '\0';
    printf("Result: %s\n", result);
    return 0;
}
