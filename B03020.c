#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int a[55][55];
    long long total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            total += a[i][j];
        }
    }

    int avg = total / (n * m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > avg) {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long sum = 0;
            for (int k = 0; k < m; k++) {
                sum += (long long)a[i][k] * a[j][k];
            }
            printf("%lld ", sum);
        }
        printf("\n");
    }

    return 0;
}
