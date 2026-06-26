#include <stdio.h>
int main() {
    int i;
    float f;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Integer: %d\n", i);

    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Float: %.2f\n", f);

    printf("Enter a char: ");
    scanf(" %c", &c);
    printf("Char: %c\n", c);

    return 0;
}
