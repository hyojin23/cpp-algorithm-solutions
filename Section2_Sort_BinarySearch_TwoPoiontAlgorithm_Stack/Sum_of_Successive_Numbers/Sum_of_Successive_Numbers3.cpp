#include <cstdio>
// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, f, sum , rt, cnt = 0;
    int a[500] = {};
    scanf("%d" ,&n);
    f = n / 2;
    a[0] = f, a[1] = f + 1;
    while (a[0] != 0) {
        sum = 0;
        for (i = 0; a[i] != 0; i++) {
            sum += a[i];
        }
        rt = i - 1;
        if (sum == n) {
            for (j = 0; j < rt; j++) {
                printf("%d + ", a[j]--);
            }
            printf("%d = %d\n", a[rt]--, sum);
            cnt++;
        } else if (sum > n)
            for (j = 0; a[j] != 0; j++)
                a[j]--;
        else {
            a[i] = a[i - 1] + 1;
            for (j = 0; a[j] != 0; j++)
                a[j]--;
        }
    }
    printf("%d", cnt);
    return 0;
}

