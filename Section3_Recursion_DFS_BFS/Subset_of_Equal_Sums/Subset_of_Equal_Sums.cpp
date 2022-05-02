#include <cstdio>
#include <vector>
using namespace std;

int total = 0, n, a[11];
bool flag = false;

void DFS(int L, int sum) {
//    freopen("input.txt", "rt", stdin);
    if (sum > total / 2) return;
    if (flag) return;
    if (L == n + 1) {
        if (sum == (total - sum))
            flag = true;
    } else {
        DFS(L + 1, sum + a[L]);
        DFS(L + 1, sum);
    }
}

int main() {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    DFS(1, 0);
    if (flag) printf("YES");
    else printf("NO");
    return 0;
}