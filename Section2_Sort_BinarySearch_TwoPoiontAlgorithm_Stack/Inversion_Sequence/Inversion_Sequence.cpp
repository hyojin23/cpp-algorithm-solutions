#include <cstdio>
#include <vector>
using namespace std;

int main() {
//    freopen("input.txt.", "rt", stdin);
    int i, j, n;
    scanf("%d", &n);
    vector<int> is(n);
    vector<int> os(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &is[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j < is[i]; j++) {
            os[i + j] = os[i + j + 1];
        }
        os[i + j] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", os[i]);
    }
    return 0;
}

