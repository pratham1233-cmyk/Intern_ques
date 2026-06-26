#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest: %.2f\n", (p * r * t) / 100);
    printf("Compound Interest: %.2f\n", p * pow(1 + r / 100, t) - p);
    return 0;
}
