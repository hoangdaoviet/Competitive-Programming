#include <bits/stdc++.h>
using namespace std;

//data type, constant and others
using ll = long long;
const long long INF = 1e18;
const string yes = "YES\n", no = "NO\n";
#define endl '\n'

//vector
using vi = vector<int>;
using vl = vector<ll>;
#define all(x) begin(x), end(x)
#define pb push_back
#define sz(x) int((x).size())

//debug
#define dbg(x) cerr << #x << ": " << x << '\n';

//preprocess
const string name="";
//#define DEBUG
//#define OFFLINE
int main()
{
	cin.tie(0)->sync_with_stdio(0);
	#ifdef DEBUG
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	#ifdef OFFLINE
		freopen((name+".inp").c_str(),"r",stdin);
		freopen((name+".out").c_str(),"w",stdout);
	#endif
	string a,b;
	cin >> a >> b;
	int n = sz(a), m = sz(b);
	a = ' ' + a; b = ' ' + b;
	vector<vector<int> > dp(n+1,vector<int>(m+1,0));
	for (int i=1; i<=n; ++i){
		for (int j=1; j<=m; ++j){
			if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout << dp[n][m];
}
