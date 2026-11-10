#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[105][105];
    int val = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            a[top][i] = val++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            a[i][right] = val++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                a[bottom][i] = val++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = val++;
            }
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
