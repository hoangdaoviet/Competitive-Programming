#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct req{
	int s,e;
};
bool cmp(req a, req b)
{
	return a.e < b.e;
}
int n, dp[10000]; req a[10000];
int main()
{
	cin >> n;
	for (int i=0; i<n; ++i){
		cin >> a[i].s >> a[i].e;
	}
	sort (a,a+n,cmp);
	dp[0] = 1;
	for (int i=1; i<n; ++i){
		dp[i] = 1; int mx = 0;
		for (int j=0; j<i; ++j){
			if (a[j].e <= a[i].s) mx = max(mx,dp[j]);
		}
		dp[i] = mx + 1;
	}
	int ans = 0;
	for (int i=0; i<n; ++i) ans = max(dp[i],ans);
	cout << ans;
}
