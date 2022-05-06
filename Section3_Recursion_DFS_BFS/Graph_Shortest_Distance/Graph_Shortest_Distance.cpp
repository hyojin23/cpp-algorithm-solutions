#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> map[21];
int dis[21];
bool ch[21];

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, m, i, a, b, x;
    queue<int> Q;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
    }
    Q.push(1);
    ch[1] = true;
    while (!Q.empty()) {
        x = Q.front();
        Q.pop();
        for (i = 0; i < map[x].size(); i++) {
            if (!ch[map[x][i]]) {
                ch[map[x][i]] = true;
                Q.push(map[x][i]);
                dis[map[x][i]] = dis[x] + 1;
            }
        }
    }
    for (i = 2; i <= n; i++) {
        printf("%d : %d\n", i, dis[i]);
    }
    return 0;
}