#include <stdio.h>
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    int a[105];
    int max_val = -1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    printf("%d\n", max_val);
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == max_val) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
}
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}