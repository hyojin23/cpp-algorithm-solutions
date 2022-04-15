#include <cstdio>
#include <vector>
using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, rank;
    scanf("%d", &n);
    vector<int> a(n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        rank = 1;
        for (j = 0; j < i; j++) {
            if (a[j] >= a[i])
                rank++;
        }
        printf("%d ", rank);
    }
    return 0;
}