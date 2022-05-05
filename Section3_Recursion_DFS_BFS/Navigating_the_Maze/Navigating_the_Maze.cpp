#include <cstdio>
#include <algorithm>

using namespace std;

int map[9][9], cnt = 0;
bool ch[9][9] = {false};

void DFS(int x, int y) {
    int i;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    if (x == 7 && y == 7) {
        cnt++;
    } else {
        for (i = 0; i < 4; i++) {
            if (map[x + dx[i]][y + dy[i]] == 0 && !ch[x + dx[i]][y + dy[i]]) {
                ch[x + dx[i]][y + dy[i]] = true;
                DFS(x + dx[i], y + dy[i]);
                ch[x + dx[i]][y + dy[i]] = false;
            }
        }
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, j;
    fill(map[0], map[9], 5);
    for (i = 1; i <= 7; i++)
        for (j = 1; j <= 7; j++)
            scanf("%d", &map[i][j]);
    ch[1][1] = true;
    DFS(1, 1);
    printf("%d\n", cnt);
    return 0;
}

