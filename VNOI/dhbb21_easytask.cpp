#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000001;
bool isprime[maxn];
int n,pre[maxn],prime[maxn];
void sieve(int n)
{
    for (int i=0; i<=n; ++i){
        isprime[i] = true;
    }
    isprime[0]=false;
    isprime[1]=false;
    for (int i=2; i*i<=n; ++i){
        if (isprime[i]){
            for (int j=i*i; j<=n; j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n;
    for (int i=1; i<=n; ++i){
        int a; cin >> a;
        pre[i] = pre[i-1] + a;
    }
    sieve(n);
    int d = 1;
    for (int i=1; i<=n; ++i){
        if (isprime[i]){
            prime[d] = i; d++;
        }
    }
    int minn = 1e9, res = -1e9;
    for (int i=1; i<d; ++i){
        minn=min(minn,pre[prime[i]-1]);
        res=max(res,pre[prime[i]]-minn);
    }
    cout << res;
}
