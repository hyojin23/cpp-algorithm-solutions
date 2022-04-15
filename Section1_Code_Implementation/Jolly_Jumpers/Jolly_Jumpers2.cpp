#include <cstdio>
#include <vector>

int main() {
    freopen("input.txt", "rt", stdin);
    int n,i;
    bool isJolly = true;
    scanf("%d", &n);
    std::vector<int> a(n);
    std::vector<int> j(n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n-1; i++) {
        if (a[i+1] > a[i]) {
            j[a[i + 1] - a[i]]= 1;
        } else {
            j[a[i] - a[i + 1]]= 1;
        }
    }

    for (i = 1; i < n; i++) {
        if (j[i] != 1)
            isJolly = false;
    }

    if (isJolly)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}