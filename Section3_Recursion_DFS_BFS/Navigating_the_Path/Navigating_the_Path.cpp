#include <cstdio>

int n, map[21][21], cnt = 0;
bool ch[21];

void DFS(int v) {
    int i;
    if (v == n) {
        cnt++;
    } else {
        for (i = 1; i <= n; i++) {
            if (map[v][i] == 1 && !ch[i]) {
                ch[i] = true;
                DFS(i);
                ch[i] = false;
            }
        }
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int m, i, a, b;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
    }
    ch[1] = true;
    DFS(1);
    printf("%d\n", cnt);
    return 0;
}

