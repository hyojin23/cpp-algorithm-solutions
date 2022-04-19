#include <cstdio>
#include <vector>
using namespace std;

void selectionSort(vector<int> &a);

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, m, i, p1 = 0, p2 = 0;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    vector<int> b(m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    selectionSort(a);
    selectionSort(b);

    while (p1 < n && p2 < m) {
        if (a[p1] == b[p2]) {
            printf("%d ", a[p1]);
            p1++;
            p2++;
        } else if (a[p1] < b[p2])
            p1++;
        else
            p2++;
    }
    return 0;
}

void selectionSort(vector<int> &a) {
    int i, j, idx, tmp;
    for (i = 0; i < a.size() - 1; i++) {
        idx = i;
        for (j = i + 1; j < a.size(); j++) {
            if (a[j] < a[idx])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }
}