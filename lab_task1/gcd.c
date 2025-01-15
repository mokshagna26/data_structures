#include <stdio.h>
int gcd(int a, int b) {
    if (a == b) return a;
    if (a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD is %d\n", gcd(a, b));
    return 0;
}
