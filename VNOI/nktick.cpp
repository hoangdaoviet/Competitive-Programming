#include <bits/stdc++.h>
using namespace std;
int n,t[60001],r[60001],f[60001];
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> t[i];
    }
    for (int i=1; i<=n-1; i++){
        cin >> r[i];
    }
    f[1] = t[1];
    f[2] = min(t[1]+t[2],r[1]);
    for (int i=3; i<=n; i++){
        f[i]=min(t[i]+f[i-1],r[i-1]+f[i-2]);
    }
    cout << f[n];
}
