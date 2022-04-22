#include <cstdio>
// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, t, num = 2, sum, tmp = 1, cnt = 0;
    scanf("%d", &n);
    while (1) {
        sum = 0;
        tmp = n;
        for (i = 1; i <= num; i++) {
            tmp -= i;
        }
        if (tmp < 0)
            break;
        for (i = 1; i <= num; i ++) {
            t = i + (tmp / num);
            if (tmp % num == 0) {
                sum += t;
                if (i == num) {
                    printf("%d = %d\n", t, sum);
                    cnt++;
                }
                else
                    printf("%d + ", t);
            }
        }
        num++;
    }
    printf("%d", cnt);

    return 0;
}
