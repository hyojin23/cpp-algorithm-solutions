#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    int n, i, j, k, l, pos = 0;
    size_t tmp;
    vector<char> str;
    bool noOut;
    stack<int> s;
    scanf("%d", &n);
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        noOut = false;
        if (!s.empty() && a[i] > s.top()) {
            printf("impossible");
            return 0;
        }
        s.push(a[i]);
        pos++;
        str.push_back('P');
        tmp = s.size();
        for (j = 0; j < tmp; j++) {
            for (k = pos; k < n; k++) {
                if (a[k] < s.top()) {
                    noOut = true;
                    break;
                }
            }
            if (noOut) {
                break;
            } else {
                s.pop();
                str.push_back('O');
            }
        }
    }
    for (i = 0; i < str.size(); i++) {
        printf("%c", str[i]);
    }
    return 0;
}

