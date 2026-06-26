#include <stdio.h>

int main() {
    char s[200], result[400];
    printf("Enter string: ");
    scanf("%s", s);
    int i = 0, j = 0;
    while (s[i] != '\0') {
        char ch = s[i];
        int count = 0;
        while (s[i] == ch && s[i] != '\0') { count++; i++; }
        result[j++] = ch;
        if (count > 1) {
            int digits[10], d = 0;
            while (count > 0) { digits[d++] = count % 10; count /= 10; }
            for (int k = d - 1; k >= 0; k--) result[j++] = '0' + digits[k];
        }
    }
    result[j] = '\0';
    printf("Compressed: %s\n", result);
    return 0;
}
