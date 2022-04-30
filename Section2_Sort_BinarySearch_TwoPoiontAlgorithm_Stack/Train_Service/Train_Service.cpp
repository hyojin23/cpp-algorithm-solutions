#include <cstdio>
#include <stack>
#include <vector>

using namespace std;

int main() {
//    freopen("input.txt", "rt", stdin);
    stack<int> s;
    int i, j = 1, n, m, tmp;
    scanf("%d", &n);
    vector<char> str;
    for (i = 1; i <= n; i++) {
        scanf("%d", &m);
        s.push(m);
        str.push_back('P');
        while (true) {
            if (s.empty()) break;
            if (s.top() == j) {
                s.pop();
                str.push_back('O');
                j++;
            } else
                break;
        }
    }
    if (!s.empty())
        printf("impossible\n");
    else
        for (i = 0; i < str.size(); i++)
            printf("%c", str[i]);
    return 0;
}