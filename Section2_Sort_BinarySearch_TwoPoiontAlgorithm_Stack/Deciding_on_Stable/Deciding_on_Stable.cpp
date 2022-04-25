#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int Count(int mid, int x[]) {
    int cnt = 1, i, pos = 1;
    for (i = 1; i <= n; i++) {
        if (x[i] - x[pos] >= mid) {
            cnt++;
            pos = i;
        }
    }
    return cnt;
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int c, i, lt = 1, rt, mid, res;
    scanf("%d %d", &n, &c);
    int *x = new int[n + 1];
    for (i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
    }
    sort(x + 1, x + n + 1);
    rt = x[n];
    while (lt <= rt) {
        mid = (lt + rt) / 2;
        if (Count(mid, x) >= c) {
            res = mid;
            lt = mid + 1;

        } else
            rt = mid - 1;
    }
    printf("%d", res);
    delete[] x;
    return 0;
}
