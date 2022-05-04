#include <cstdio>

int main() {
    int n, m, map[21][21] = {}, i, j, x, y, z;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &x, &y, &z);
        map[x][y] = z;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
