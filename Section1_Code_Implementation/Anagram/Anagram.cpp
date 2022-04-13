#include <cstdio>
#include <algorithm>

int main() {
//    freopen("input.txt", "rt", stdin);
    int a[53] = {0}, b[53] = {0}, i;
    char str[100];
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) // Upper case
            a[str[i] - 64] += 1;
        else // Lower case
            a[str[i] - 70] += 1;
    }

    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) // Upper case
            b[str[i] - 64] += 1;
        else // Lower case
            b[str[i] - 70] += 1;
    }

    for (i = 0; i < 53; i++) {
        if (a[i] != b[i]) {
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");
    return 0;
}
