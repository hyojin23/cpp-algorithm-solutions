#include <cstdio>
#include <vector>
using namespace std;

vector<int> cacheHit(int pos, vector<int> cache);
vector<int> cacheMiss(int num, vector<int> cache) ;

// My solution
int main() {
//    freopen("input.txt", "rt", stdin);
    int s, n, i, j, pos, num;
    bool isCacheHit;
    scanf("%d %d", &s, &n);
    vector<int> cache(s);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        isCacheHit = false;
        for (j = 0; j < s; j++) {
            if (num == cache[j]) { // If the job number is in the cache
                pos = j;
                isCacheHit = true;
                // cacheHit
                cache = cacheHit(pos, cache);
            }
        }
        // cacheMiss
        if (!isCacheHit) {
            cache = cacheMiss(num, cache);
        }
    }
    // print
    for (i = 0; i < s; i++) {
        printf("%d ", cache[i]);
    }
    return 0;
}

vector<int> cacheHit(int pos, vector<int> cache) {
    int i, tmp;
    tmp = cache[pos];
    for (i = pos - 1; i >= 0; i--) {
        cache[i+1] = cache[i];
    }
    cache[i + 1] = tmp;
    return cache;
}

vector<int> cacheMiss(int num, vector<int> cache) {
    int i, pos = (int) cache.size() - 1;
    for (i = 0; i < cache.size(); i++) {
        if (cache[i] == 0) {
            pos = i;
            break;
        }
    }
    for (i = pos - 1; i >= 0; i--) {
        cache[i + 1] = cache[i];
    }
    cache[i + 1] = num;
    return cache;
}