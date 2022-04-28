#include <cstdio>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, k, cnt = 0;
    scanf("%d", &n);
    vector<vector<int> > a(n + 2, vector<int> (n + 2));
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 0; k < 4; k++) {
                if (a[i][j] <= a[i + dx[k]][j + dy[k]]) {
                    cnt++;
                    break;
                }
            }
        }
    }
    printf("%d\n", n * n - cnt);

    return 0;
}

