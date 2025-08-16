#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001

int a[MAX], b[MAX], freqA[MAX], freqB[MAX];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            freqA[a[i]] = 0;
        }
        for (int i = 1; i <= m; i++) {
            scanf("%d", &b[i]);
            freqB[b[i]] = 0;
        }
        for (int i = 1; i <= m; i++) {
            freqB[b[i]]++;
        }
        int cnt = 0, ans = 0;
        for (int i = 1; i <= m; i++) {
            freqA[a[i]]++;
            if (freqA[a[i]] <= freqB[a[i]]) {
                cnt++;
            }
        }
        if (cnt >= k) {
            ans++;
        }
        for (int i = m + 1; i <= n; i++) {
            if (freqA[a[i - m]] <= freqB[a[i - m]]) {
                cnt--;
            }
            freqA[a[i - m]]--;
            freqA[a[i]]++;
            if (freqA[a[i]] <= freqB[a[i]]) {
                cnt++;
            }
            if (cnt >= k) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
