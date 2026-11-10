#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int first_even = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (!first_even) printf(" ");
            printf("%d", a[i]);
            first_even = 0;
        }
    }
    printf("\n");
    int first_odd = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (!first_odd) printf(" ");
            printf("%d", a[i]);
            first_odd = 0;
        }
    }
    printf("\n");
    return 0;
}