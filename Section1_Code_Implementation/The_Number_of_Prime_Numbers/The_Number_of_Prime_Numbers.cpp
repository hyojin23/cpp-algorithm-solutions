#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, cnt = 0;
    bool isPrime;

    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        isPrime = true;
        for (j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}