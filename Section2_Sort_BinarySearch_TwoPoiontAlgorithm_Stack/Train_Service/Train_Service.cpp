#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, k, pos = 0, tmp;
    bool noOut;
    stack<int> s;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        noOut = false;
        s.push(a[i]);
        pos++;
        printf("P");
        tmp = s.size();
        for (j = 0; j < tmp; j++) {
            for (k = pos; k < n; k++) {
                if (a[k] < s.top()) {
                    noOut = true;
                    break;
                }
            }
            if (noOut)
                break;
            else {
                s.pop();
                printf("O");
            }
        }
    }
    return 0;
}

