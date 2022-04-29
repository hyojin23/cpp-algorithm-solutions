#include <cstdio>
#include <vector>
using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int H, W, h, w, i, j, sum = 0, max = -2147000000;
    scanf("%d %d", &H, &W);
    vector<vector<int> > a(H + 1, vector<int>(W + 1));
    vector<vector<int> > dy(H + 1, vector<int>(W + 1));
    for (i = 1; i <= H; i++) {
        for (j = 1; j <= W; j++) {
            scanf("%d", &a[i][j]);
            dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
        }
    }
    scanf("%d %d", &h, &w);

    for (i = h; i <= H; i++) {
        for (j = w; j <= W; j++) {
            sum = dy[i][j] - dy[i - h][j] -dy[i][j - w] + dy[i - h][j - w];
            if (sum > max)
                max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}
