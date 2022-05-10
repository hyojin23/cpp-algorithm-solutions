#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Data {
    int money;
    int when;
    Data(int a, int b) {
        money = a;
        when = b;
    }
    bool operator < (Data &b) const {
        return when > b.when;
    }
};

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, m, d, i, j, max = -2147000000, res = 0;
    vector<Data> T;
    priority_queue<int> pQ;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &m, &d);
        T.push_back(Data(m, d));
        if (d > max)
            max = d;
    }
    j = 0;
    sort(T.begin(), T.end());
    for (i = max; i >= 1; i--) {
        for ( ; j < n; j++) {
            if (T[j].when < i) break;
            pQ.push(T[j].money);
        }
        if (!pQ.empty()) {
            res += pQ.top();
            pQ.pop();
        }
    }
    printf("%d\n", res);
    return 0;
}