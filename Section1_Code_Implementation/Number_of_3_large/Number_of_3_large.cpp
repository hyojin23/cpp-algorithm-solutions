#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, digit = 1, cur, lt, rt, tmp, cnt = 0;
    scanf("%d", &n);
    lt = n;
    while (lt != 0) {
        cur = (n / digit) % 10;
        lt = n / (10 * digit);
        rt = n % digit;

        if (cur > 3) {
            cnt += (lt + 1) * digit;
        } else if (cur < 3) {
            cnt += lt * digit;
        } else {
            cnt += lt * digit + rt + 1;
        }
        digit = digit * 10;
    }
    printf("%d\n", cnt);
    return 0;
}