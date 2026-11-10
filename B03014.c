#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int countA[1005] = {0};
    int countB[1005] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        countA[x] = 1;
    }

    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        countB[x] = 1;
    }

    for (int i = 1; i <= 1000; i++) {
        if (countA[i] && countB[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = 1; i <= 1000; i++) {
        if (countA[i] && !countB[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = 1; i <= 1000; i++) {
        if (!countA[i] && countB[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
