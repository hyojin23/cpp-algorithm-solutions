#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, n, pre, now, cnt = 1, max = 1;
    scanf("%d", &n);
    scanf("%d", &pre);

    for (i = 2; i <= n; i++) {
        scanf("%d", &now);
        if (now >= pre) {
            cnt++;
        } else {
            cnt = 1;
        }
        if (cnt > max)
            max = cnt;
        pre = now;
    }
    printf("%d\n", max);

    return 0;
}