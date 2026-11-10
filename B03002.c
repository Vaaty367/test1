#include <stdio.h>
long long f[95];
void init_fibonacci() {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int main() {
    init_fibonacci();
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            printf("%lld\n", f[n]);
        }
    }
    return 0;
}