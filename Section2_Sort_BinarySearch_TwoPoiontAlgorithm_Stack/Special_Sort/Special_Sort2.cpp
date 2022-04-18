#include <cstdio>

int main() {
    freopen("input.txt", "rt", stdin);
    int n, i, idx = 0, a[101], res[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            res[idx] = a[i];
            idx++;
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            res[idx] = a[i];
            idx++;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}
