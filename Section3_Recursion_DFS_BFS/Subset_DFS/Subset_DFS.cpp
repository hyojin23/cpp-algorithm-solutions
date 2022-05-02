#include <cstdio>

int ch[11], n;

void DFS(int L) {
//    freopen("input.txt", "rt", stdin);
    int i;
    if (L == n + 1) {
        for (i = 1; i <= n; i++) {
            if (ch[i] == 1)
                printf("%d ", i);
        }
        printf("\n");
    } else {
        ch[L] = 1;
        DFS(L + 1);
        ch[L] = 0;
        DFS(L + 1);
    }
}

int main() {
    scanf("%d", &n);
    DFS(1);
    return 0;
}