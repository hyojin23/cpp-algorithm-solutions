#include <cstdio>

int map[21][21], n, min = 2147000000;
bool ch[21];

void DFS(int v, int cost) {
    int i;
    if (v == n) {
        if (cost < min) {
            min = cost;
        }
    } else {
        for (i = 1; i <= n; i++) {
            if (map[v][i] != 0 && !ch[i]) {
                ch[i] = true;
                DFS(i, cost + map[v][i]);
                ch[i] = false;
            }
        }
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int m, a, b, c, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;
    }
    ch[1] = true;
    DFS(1, 0);
    printf("%d\n", min);
    return 0;
}
