#include <cstdio>

int main() {
    int i, a[10], b[10], as = 0, bs = 0, lw = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            as += 3;
            lw = 1;
        }
        else if (a[i] < b[i]) {
            bs += 3;
            lw = 2;
        } else {
            as += 1;
            bs += 1;
        }
    }
    printf("%d %d\n", as, bs);
    if (as > bs)
        printf("A\n");
    else if (as < bs)
        printf("B\n");
    else if (lw == 1)
        printf("A\n");
    else if (lw == 2)
        printf("B\n");
    else
        printf("D\n");
    return 0;
}
