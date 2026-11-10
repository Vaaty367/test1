#include <stdio.h>

int is_symmetric(long long a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    long long a[105];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    if (is_symmetric(a, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
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