#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        int mark[1005] = {0};
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (isPrime(x)) {
                mark[x] = 1;
            }
        }
        for (int i = 2; i <= 1000; i++) {
            if (mark[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
