#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, digit, max = -2147000000, res;
    int ch[10] = {0};
    char a[101];
    scanf("%s", &a);

    for (i = 0; a[i] != '\0'; i++) {
        digit = a[i] - 48;
        ch[digit]++;
    }

    for (i = 0; i < 10; i++) {
        if (ch[i] >= max) {
            max = ch[i];
            res = i;
        }
    }
    printf("%d\n", res);

    return 0;
}

