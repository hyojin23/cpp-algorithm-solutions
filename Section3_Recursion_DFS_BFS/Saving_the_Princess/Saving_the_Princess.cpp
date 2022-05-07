#include <cstdio>
#include <queue>

using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, k, i;
    queue<int> Q;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        Q.push(i);
    }
    while (Q.size() != 1) {
        for (i = 1; i <= k; i++) {
            if (i != k)
                Q.push(Q.front());
            Q.pop();
        }
    }
    printf("%d\n", Q.front());
    return 0;
}