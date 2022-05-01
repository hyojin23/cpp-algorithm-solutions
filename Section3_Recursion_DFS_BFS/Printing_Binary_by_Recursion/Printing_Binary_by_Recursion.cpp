#include <cstdio>

void recur(int x) {
    if (x == 0) return;
    else {
        recur(x / 2);
        printf("%d", x % 2);
    }
}

int main() {
    int n;
    scanf("%d" , &n);
    recur(n);
    return 0;
}