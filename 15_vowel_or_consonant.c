#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("Vowel\n");
    else if (c >= 'a' && c <= 'z')
        printf("Consonant\n");
    else
        printf("Not an alphabet\n");
    return 0;
}
