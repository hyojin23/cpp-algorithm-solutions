#include <cstdio>
int a[2001];

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, k, p = 0, second = 0, tot = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        tot += a[i];
    }
    scanf("%d", &k);
    if (tot <= k) {
        printf("-1\n");
        return 0;
    }

    while (true) {
        p++;
        if (p > n)
            p = 1;
        if (a[p] == 0)
            continue;
        a[p]--;
        second++;
        if (second == k)
            break;
    }

    while (true) {
        p++;
        if (p > n)
            p = 1;
        if (a[p] != 0) {
            break;
        }
    }
    printf("%d\n", p);
    return 0;
}