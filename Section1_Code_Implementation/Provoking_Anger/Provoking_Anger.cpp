#include <cstdio>

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, a, i, cnt = 0, max;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[n-1];
    for (i = n-1; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}