#include <cstdio>
#include <vector>
using namespace std;
#define x first
#define y second


int n, min_cost = 2147000000;
vector<pair<int, int> > map[30];
bool ch[30];

void DFS(int v, int cost) {
    int i;
    if (v == n) {
        if (cost < min_cost)
            min_cost = cost;
    } else {
        for (i = 0; i < map[v].size(); i++) {
            if (!ch[map[v][i].x]) {
                ch[map[v][i].x] = true;
                DFS(map[v][i].x, cost + map[v][i].y);
                ch[map[v][i].x] = false;
            }
        }
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int m, i, a, b, c;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        map[a].push_back(make_pair(b, c));
    }
    ch[1] = true;
    DFS(1, 0);
    printf("%d\n", min_cost);

    return 0;
}