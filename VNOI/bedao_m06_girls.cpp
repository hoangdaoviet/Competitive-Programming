#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000001;
long long n,m,k,a[maxn],s[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> m >> n >> k;
    for (int i=1; i<=m; ++i){
        cin >> a[i];
    }
    sort(a+1,a+1+m);
    for (int i=1; i<=m; ++i){
        s[i]=s[i-1]+a[i];
    }

    long long res = -2;
    for (int r=m; r-n+1>=1; r--){
        if (a[r] - a[r-n+1] <= k){
            res = max(res,s[r]-s[r-n]);
        }
    }
    cout << res;
    /*
    for (int i=1; i<=m; ++i){
        cout << a[i] << ' ';
    }
    cout << '\n';
    for (int i=1; i<=m; ++i){
        cout << s[i] << ' ';
    }
    */
}
