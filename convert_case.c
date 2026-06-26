#include <stdio.h>

int main() {
    char s[100];
    int choice;
    printf("Enter string: ");
    scanf("%s", s);
    printf("1. Uppercase  2. Lowercase\nChoice: ");
    scanf("%d", &choice);
    for (int i = 0; s[i] != '\0'; i++) {
        if (choice == 1 && s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        if (choice == 2 && s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    printf("Result: %s\n", s);
    return 0;
}
