#include <stdio.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int len = 0;
    while (s[len] != '\0') len++;
    int pal = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
        if (s[i] != s[j]) { pal = 0; break; }
    printf(pal ? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}
