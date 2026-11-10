#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int ok = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
