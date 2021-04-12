#include <bits/stdc++.h>
using namespace std;

using ll=long long;

const int maxn=100001;
int n; ll a[maxn],res,ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    for (int i=1; i<=n; i++){
        ans=max(ans,a[i]);
    }
    cout << ans;
}
