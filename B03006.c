#include <stdio.h>
int count[100005];

void solve(int test_num) {
    int n;
    if (scanf("%d", &n) != 1) return;
    int a[105];
    for (int i = 0; i < 100005; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }
    printf("Test %d:\n", test_num);
    for (int i = 0; i < n; i++) {
        if (count[a[i]] > 0) {
            printf("%d xuat hien %d lan\n", a[i], count[a[i]]);
            count[a[i]] = 0;
        }
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