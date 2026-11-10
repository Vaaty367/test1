#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[105][105];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Test %d:\n", tc);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                for (int k = 0; k < m; k++) {
                    sum += a[i][k] * a[j][k];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }

    return 0;
}
