#include <stdio.h>
int main() {
    int a, b, x, y, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("GCD: %d\nLCM: %d\n", gcd, lcm);
    return 0;
}
