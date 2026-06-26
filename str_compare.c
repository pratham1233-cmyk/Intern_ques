#include <stdio.h>

int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) i++;
    int result = a[i] - b[i];
    if (result == 0) printf("Strings are equal\n");
    else if (result < 0) printf("First string is smaller\n");
    else printf("First string is greater\n");
    return 0;
}
