#include <cstdio>

// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int n, a, i, j, cnt = 0;
    bool isAnger;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        arr[i] = a;
    }

    for (i = 0; i < n-1; i++) {
        isAnger = true;
        for (j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isAnger = false;
                break;
            }
        }
        if (isAnger) {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}

