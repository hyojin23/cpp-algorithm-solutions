#include <cstdio>

// My solution
char lastWinner(int a[], int b[]) {
    int i;
    for (i = 10; i >= 1; i--) {
        if (a[i] > b[i])
            return 'A';
        else if (a[i] < b[i])
            return 'B';
    }
    return 'D';
}

int main() {
//    freopen("input.txt", "rt", stdin);
    int i, a_sum = 0, b_sum = 0, a[11], b[11];

    for (i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 10; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 1; i <= 10; i++) {
        if (a[i] > b[i])
            a_sum += 3;
        else if (a[i] < b[i])
            b_sum += 3;
        else {
            a_sum += 1;
            b_sum += 1;
        }
    }
    printf("%d %d\n", a_sum, b_sum);

     if (a_sum > b_sum)
         printf("A\n");
     else if (a_sum < b_sum)
         printf("B\n");
     else
         printf("%c\n", lastWinner(a, b));
    return 0;
}
