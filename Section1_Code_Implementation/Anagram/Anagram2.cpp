#include <cstdio>

// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int i, j, sum = 0, sum2 = 0;
    bool isSame = true;
    char ch[101], ch2[101];
    scanf("%s", &ch);
    scanf("%s", &ch2);

    for (i = 0; ch[i] != '\0'; i++) {
        for (j = 0; ch2[j] != '\0'; j++) {
            if (ch[i] == ch2[j]) {
                ch2[j] = 1;
                break;
            }
        }
    }

    for (i = 0; ch2[i] != '\0'; i++) {
        if (ch2[i] != 1)
            isSame = false;
    }

    if (isSame)
        printf("YES");
    else
        printf("NO");

    return 0;
}