#include <cstdio>
#include <vector>
using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int H, W, i, j, x, y, h, w, sum, max = -2147000000;
    scanf("%d %d", &H, &W);
    vector<vector<int> > a(H, vector<int> (W));
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &h, &w);
    for (x = 0; x <= H - h; x++) {
        for (y = 0; y <= W - w; y++) {
            sum = 0;
            for (i = 0; i < h; i++) {
                for (j = 0; j < w; j++) {
                    sum += a[i + x][j + y];
                }
            }
            if (sum > max)
                max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}
