#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    char a[10];
    int c = 0, h = 0, i, pos, mass;
    scanf("%s", &a);

    if (a[1] == 'H') {
        c = 1;
        pos = 1;
    } else {
        for (i = 1; a[i] != 'H'; i++) {
            c = c * 10 + (a[i] - 48);
        }
        pos = i;
    }
    if (a[pos + 1] == '\0')
        h = 1;
    else {
        for (i = pos + 1; a[i] != '\0'; i++) {
            h = h * 10 + (a[i] - 48);
        }
    }
    mass = 12 * c + 1 * h;
    printf("%d\n", mass);

    return 0;
}
