#include <stdio.h>
int main() {
    int n, orig, rem, i;
    long long sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == orig)
        printf("%d is a Strong number\n", orig);
    else
        printf("%d is not a Strong number\n", orig);
    return 0;
}
