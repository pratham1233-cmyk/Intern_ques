#include <stdio.h>
#include <math.h>
int main() {
    int n, orig, rem, digits = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if ((int)sum == orig)
        printf("%d is an Armstrong number\n", orig);
    else
        printf("%d is not an Armstrong number\n", orig);
    return 0;
}
