#include <stdio.h>

int main() {
    char a[200], b[100];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    int i = 0, j = 0;
    while (a[i] != '\0') i++;
    while ((a[i++] = b[j++]) != '\0');
    printf("Concatenated: %s\n", a);
    return 0;
}
