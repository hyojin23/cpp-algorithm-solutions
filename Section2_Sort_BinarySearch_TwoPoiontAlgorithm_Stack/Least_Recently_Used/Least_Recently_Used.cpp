#include <cstdio>
#include <vector>
using namespace std;


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
    int i, pos = 0;
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

int main() {
    int s, n, i, j, pos, num;
    bool isCacheHit = false;
    scanf("%d %d", &s, &n);
    vector<int> cache(s);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        for (j = 0; j < s; j++) {
            if (num == cache[j]) {
                pos = j;
                isCacheHit = true;
                // cacheHit
//                cache = cacheHit(pos, cache);
//                for (i = 0; i < s; i++) {
//                    printf("%d ", cache[i]);
//                }
//                printf("\n");

            }
        }
        // cacheMiss
//        cache = cacheMiss(num, cache);
//        for (i = 0; i < s; i++) {
//            printf("%d ", cache[i]);
//        }
//        printf("\n");
    }
    if (isCacheHit)
        cache = cacheHit(pos, cache);
    else {
        cache = cacheMiss(num, cache);
    }



    for (i = 0; i < s; i++) {
        printf("%d ", cache[i]);
    }
    return 0;
}