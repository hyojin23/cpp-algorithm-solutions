#include <cstdio>
#include <vector>

using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, tmp, sum = 0;
    scanf("%d", &n);
    vector<vector<int> > a(n, vector<int>(n));
    for (i = 0; i < n; i++) {
        scanf("%d", &tmp);
        for (j = 0; j < n; j++) {
            a[j][i] = tmp;
        }
    }
    for (i = n - 1; i >= 0; i--) {
        scanf("%d", &tmp);
        for (j = 0; j < n; j++) {
            if (tmp < a[i][j])
                a[i][j] = tmp;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    printf("%d\n", sum);

    return 0;
}
