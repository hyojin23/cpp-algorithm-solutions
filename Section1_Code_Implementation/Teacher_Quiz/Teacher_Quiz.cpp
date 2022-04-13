#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, c, answer, i, j, sum;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum = 0;
        scanf("%d %d", &c, &answer);

        for (j = 1; j <= c; j++) {
            sum += j;
        }

        if (sum == answer)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
