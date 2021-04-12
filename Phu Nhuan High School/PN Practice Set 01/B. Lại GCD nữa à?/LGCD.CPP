#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=100005;
ll n,k,a[maxn];

ll subtask1()
{
    for (int d=n; d>0; d--){
        for (int i=1; i+d-1<=n; i++){
            ll res=a[i];
            for (int j=i; j<=i+d-1; j++){
                res=__gcd(res,a[j]);
            }
            if (res==k) return d;
        }
    }
    return 0;
}

bool found(int d)
{
    for (int i=1; i+d-1<=n; i++){
        ll res=a[i];
        for (int j=i; j<=i+d-1; j++){
            res=__gcd(res,a[j]);
        }
        if (res==k) return true;
    }
    return false;
}
ll subtask2()
{
    if (found(1)==false && found(2)==false) return 0;
    int ans=0;
    if (found(1)==true) ans=1;
    int l=2,r=n,mid;
    while (l<=r){
        mid=(l+r)/2;
        if (found(mid)==true){
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    return ans;
}

ll subtask3()
{
    int d=0, ans=0;
	ll gcd;
    for(int i=1; i<=n; ++i){
        if(a[i] % k == 0){
            d = d + 1;
            if(d == 1) gcd = a[i];
            else gcd = __gcd(gcd, a[i]);

            if(gcd == k) ans = max(ans, d);
        }
        else d = 0;
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    //if (n<=100) cout << subtask1();
    //if (n<=2000) cout << subtask2();
    cout << subtask3();
}
