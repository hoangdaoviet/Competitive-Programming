#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

int n, m, sumL[MAXN], sumR[MAXN];

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i) {
        int l, r, s;
        scanf("%d%d%d", &l, &r, &s);
        sumL[r] += s;
        sumR[l] += s;
    }

    for(int i = 2; i <= m; ++i)
        sumL[i] += sumL[i-1];
    for(int i = m-1; i >= 1; --i)
        sumR[i] += sumR[i+1];

    int ans = 0;
    for(int i = 1; i <= m; ++i)
        ans = max(ans, sumL[i-1] + sumR[i+1]);

    printf("%d\n", ans);

    return 0;
}
