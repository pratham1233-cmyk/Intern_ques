#include <stdio.h>

int main() {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    int v = 0, c = 0, d = 0, sp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') v++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) c++;
        else if (ch >= '0' && ch <= '9') d++;
        else if (ch == ' ') sp++;
    }
    printf("Vowels: %d, Consonants: %d, Digits: %d, Spaces: %d\n", v, c, d, sp);
    return 0;
}
