#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e5+5;
int n,a[maxn],b[maxn],c[maxn],f[maxn][4];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; ++i){
        int a,b,c; cin >> a >> b >> c;
        f[i][1] = max(f[i-1][2] + a, f[i-1][3] + a);
        f[i][2] = max(f[i-1][1] + b, f[i-1][3] + b);
        f[i][3] = max(f[i-1][1] + c, f[i-1][2] + c);
    }
    cout << max({f[n][1],f[n][2],f[n][3]});
}
