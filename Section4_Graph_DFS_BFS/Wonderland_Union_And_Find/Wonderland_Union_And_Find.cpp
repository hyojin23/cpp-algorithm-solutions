#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int unf[26];

struct Edge {
    int v1, v2, val;

    Edge(int a, int b, int c) {
        v1 = a;
        v2 = b;
        val = c;
    }
    bool operator < (Edge &b) {
        return val < b.val;
    }
};

int Find(int v) {
    if (v == unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a != b) unf[a] = b;
}

int main() {
//    freopen("input.txt", "rt", stdin);
    vector<Edge> Ed;
    int v, e, i, a, b, c, cnt = 0, res = 0;
    scanf("%d %d", &v, &e);
    for (i = 1; i <= v; i++) {
        unf[i] = i;
    }
    for (i = 1; i <= e; i++) {
        scanf("%d %d %d", &a, &b, &c);
        Ed.push_back(Edge(a, b, c));
    }
    sort(Ed.begin(), Ed.end());
    for (i = 0; i < e; i++) {
        int fa = Find(Ed[i].v1);
        int fb = Find(Ed[i].v2);
        if (fa != fb) {
            res += Ed[i].val;
            Union(fa, fb);
        }
    }
    printf("%d\n", res);
    return 0;
}

