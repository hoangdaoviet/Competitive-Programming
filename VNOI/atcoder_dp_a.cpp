#include <bits/stdc++.h>
using namespace std;
int n,h[100000],dp[100000];
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin >> n;
	for (int i=0; i<n; ++i){
		cin >> h[i];
	}
	dp[0] = 0;
	dp[1] = dp[0] + abs(h[1]-h[0]);
	for (int i=2; i<n; ++i){
		dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
	}
	cout << dp[n-1] << '\n';
}
