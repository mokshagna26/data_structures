#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i <= n ? 2 * i - 1 : 2 * (2 * n - i) - 1;
        int spaces = n - (i <= n ? i : 2 * n - i);
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    return 0;
}
