#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, disc, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", r1, r2);
    } else if (disc == 0) {
        r1 = -b / (2 * a);
        printf("One real root: %.2f\n", r1);
    } else {
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               -b / (2 * a), sqrt(-disc) / (2 * a),
               -b / (2 * a), sqrt(-disc) / (2 * a));
    }
    return 0;
}
