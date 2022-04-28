#include <cstdio>
#include <algorithm>

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, j, sum, avg, dev, res, a[9][9], min;
    for (i = 0; i < 9; i++) {
        sum = 0;
        for (j = 0; j < 9; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        min = 2147000000;
        avg = (sum / 9.0) + 0.5;
        for (j = 0; j < 9; j++) {
            dev = abs(a[i][j] - avg);
            if (dev < min) {
                min = dev;
                res = a[i][j];
            } else if (dev == min)
                res = a[i][j] > res ? a[i][j] : res;
        }
        printf("%d %d\n", avg, res);
    }
    return 0;
}
