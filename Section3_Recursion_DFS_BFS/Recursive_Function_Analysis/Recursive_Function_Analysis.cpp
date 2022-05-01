#include <cstdio>

void recur(int x) {
    if (x == 0) return;
    else {
        recur(x - 1);
        printf("%d " , x);
    }
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int n;
    scanf("%d", &n);
    recur(n);

    return 0;
}

