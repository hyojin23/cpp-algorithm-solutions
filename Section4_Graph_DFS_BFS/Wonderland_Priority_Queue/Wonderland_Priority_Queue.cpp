#include <cstdio>
#include <queue>

using namespace std;

bool ch[26];

struct Edge {
    int e, val;
    Edge(int a, int b) {
        e = a;
        val = b;
    }
    bool operator < (const Edge &b) const {
        return val > b.val;
    }
};
int main() {
//    freopen("input.txt", "rt", stdin);
    priority_queue<Edge> Q;
    vector<pair<int, int> > map[30];
    int n, m, i, a, b, c, res = 0;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        map[a].push_back(make_pair(b, c));
        map[b].push_back(make_pair(a, c));
    }
    Q.push(Edge(1, 0));
    while (!Q.empty()) {
        Edge tmp = Q.top();
        Q.pop();
        int v = tmp.e;
        int cost = tmp.val;
        if (!ch[v]) {
            res += cost;
            ch[v] = true;
            for (i = 0; i < map[v].size(); i++) {
                Q.push(Edge(map[v][i].first, map[v][i].second));
            }
        }
    }
    printf("%d\n", res);
    return 0;
}