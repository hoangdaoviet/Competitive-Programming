#include <bits/stdc++.h>
#define mod 14062008
using namespace std;
unsigned long long int n,k,f[100001],a[100001];
bool broken[100001];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n >> k;
    for (int i=1; i<=k; i++){
        cin >> a[i];
        int j=a[i]; broken[j]=true;
    }
    f[1]=1; f[2]=(broken[2]==true?0:1);
    for (int i=3; i<=n; i++){
        if (broken[i]){
            f[i]=0;
        } else {
            f[i]=((f[i-1]%mod)+(f[i-2]%mod))%mod;
        }
    }
    cout << f[n];
}
