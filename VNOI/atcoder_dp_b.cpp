#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 1;
int n,m,a[maxn],dp[maxn];
int main()
{
	//freopen("JUMP.INP","r",stdin);
	//freopen("JUMP.OUT","w",stdout);
	cin >> n >> m;
	for (int i=1; i<=n; ++i){
		cin >> a[i];
	}
	dp[1] = 0;
	for (int i=2; i<=n; ++i){
		int t = 1e9;
		for (int k=1; k<=m; ++k){
			if (i - k >= 1) t = min(dp[i-k] + abs(a[i]-a[i-k]), t);
		}
		dp[i] = t;
	}
	cout << dp[n] << '\n';
}
