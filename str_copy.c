#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter string: ");
    scanf("%s", src);
    int i = 0;
    while ((dest[i] = src[i]) != '\0') i++;
    printf("Copied: %s\n", dest);
    return 0;
}
