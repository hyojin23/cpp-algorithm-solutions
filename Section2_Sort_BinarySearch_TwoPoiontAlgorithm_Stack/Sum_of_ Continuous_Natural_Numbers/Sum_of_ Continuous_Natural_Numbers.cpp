#include <cstdio>

int main() {
    int n, i, sum = 0, num = 1;
    scanf("%d" ,&n);
    for (i = 1; i <= n / 2; i++) {
        while (sum != n) {
            sum += num++;
        }
    }
    return 0;
}

