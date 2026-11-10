#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[105];
    int count[100005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (count[a[i]] > 0) {
            printf("%d %d\n", a[i], count[a[i]]);
            count[a[i]] = 0;
        }
    }
    return 0;
}