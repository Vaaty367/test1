#include <stdio.h>

int count[100005];

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void solve(int test_num) {
    int n;
    if (scanf("%d", &n) != 1) return;
    int a[105];
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    printf("Test %d:\n", test_num);
    for (int i = 2; i <= max_val; i++) {
        if (count[i] > 0 && is_prime(i)) {
            printf("%d xuat hien %d lan\n", i, count[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        count[a[i]] = 0;
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            solve(i);
        }
    }
    return 0;
}

