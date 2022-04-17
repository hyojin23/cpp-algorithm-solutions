#include <cstdio>
#include <vector>
using namespace std;

int main() {
//    freopen("intput.txt", "rt", stdin);
    int n, i, j, idx, tmp, cnt = 0;

    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[idx])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for (i = 1; i < n; i++) {
        if (a[i - 1] > a[i])
            cnt++;
        if (cnt == 2) {
            printf("%d\n", a[i]);
            break;
        }
    }

    return 0;
}
