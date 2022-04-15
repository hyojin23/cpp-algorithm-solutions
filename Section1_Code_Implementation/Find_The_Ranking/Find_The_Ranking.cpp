#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("input.txt", "rt", stdin);
    int i, j, n, rank;
    scanf("%d", &n);
    vector<int> a(n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        rank = 1;
        for (j = 0; j < n; j++) {
            if (a[i] < a[j])
                rank++;
        }
        printf("%d ", rank);
    }
    return 0;
}