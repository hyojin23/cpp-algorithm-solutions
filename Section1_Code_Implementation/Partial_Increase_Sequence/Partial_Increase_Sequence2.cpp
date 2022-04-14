#include <cstdio>
#include <vector>

// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, cnt = 0, mcnt = 0, len;

    scanf("%d", &n);
    std::vector<int> a(n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i+1] >= a[i]) {
            cnt++;
        } else {
            cnt = 0;
        }
        if (cnt > mcnt)
            mcnt = cnt;
    }
    len = mcnt + 1;
    printf("%d\n", len);

    return 0;
}

