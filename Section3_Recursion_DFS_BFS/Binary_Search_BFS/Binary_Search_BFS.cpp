#include <cstdio>
#include <vector>

using namespace std;

int Q[100], front = -1, back = -1;
bool ch[10];
vector<int> map[10];

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, a, b, x;
    for (i = 1; i <= 6; i++) {
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
        map[b].push_back(a);
    }
    Q[++back] = 1;
    ch[1] = true;
    while (front < back) {
        x = Q[++front];
        printf("%d ", x);
        for (i = 0; i < map[x].size(); i++) {
            if (!ch[map[x][i]]) {
                ch[map[x][i]] = true;
                Q[++back] = map[x][i];
            }
        }
    }
    return 0;
}

