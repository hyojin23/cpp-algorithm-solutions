#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, tmp, cnt_2 = 0, cnt_5 = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        tmp = i;
        j = 2;
        while (true) {
            if (tmp % j == 0) {
                tmp = tmp / j;
                if (j == 2) {
                    cnt_2++;
                } else if (j == 5) {
                    cnt_5++;
                }
            } else {
                j++;
            }
            if (tmp == 1)
                break;
        }
    }
    if (cnt_2 > cnt_5)
        printf("%d\n", cnt_5);
    else
        printf("%d\n", cnt_2);
    return 0;
}