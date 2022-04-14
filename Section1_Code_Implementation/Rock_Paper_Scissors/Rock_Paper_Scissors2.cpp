#include <cstdio>

// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            printf("D\n");
        } else if (a[i] + b[i] == 4) {
            if (a[i] < b[i])
                printf("A\n");
            else
                printf("B\n");
        } else {
            if (a[i] > b[i])
                printf("A\n");
            else
                printf("B\n");
        }
    }
    return 0;
}