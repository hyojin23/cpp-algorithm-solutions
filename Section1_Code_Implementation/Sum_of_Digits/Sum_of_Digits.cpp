#include <cstdio>

int digit_sum(int x) {
    int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x = x / 10;
        }
    return sum;
}

int main () {
//    freopen("input.txt", "rt", stdin);
    int n, num, i, sum, max = -2147000000, res;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;
        } else if (sum == max) {
            if (num > res)
                res = num;
        }
    }
    printf("%d", res);

    return 0;
}
