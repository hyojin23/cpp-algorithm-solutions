#include <cstdio>
#include <vector>

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, j, n, k, sum = 0, max;
    scanf("%d %d", &n, &k);
    std::vector<int> a(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < k; i++) {
        sum += a[i];
    }
    max = sum;

    for (i = 1; i < n- k + 1; i++) {
        sum = sum - a[i - 1] + a[i + k - 1];
        if (sum > max)
            max = sum;
    }
    printf("%d", max);

    return 0;
}

