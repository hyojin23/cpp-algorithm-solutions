#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, m, a, i, time = 0, max = -2147000000;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > m)
            time++;
        else
            time = 0;
        if (time > max)
            max = time;
    }
    if (max == 0)
        printf("-1\n");
    else
        printf("%d\n", max);
    return 0;
}
