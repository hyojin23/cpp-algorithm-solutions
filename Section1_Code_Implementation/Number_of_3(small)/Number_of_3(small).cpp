#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, n, tmp, cnt = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        tmp = i;
        while (tmp > 0) {
            if (tmp % 10 == 3)
                cnt++;
            tmp = tmp / 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}