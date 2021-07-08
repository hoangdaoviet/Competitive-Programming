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

struct order
{
	int s,d,e,p;
	int E(){return s+d;}
};

bool cmp(order a, order b)
{
	return a.e < b.e;
}
void solve()
{
	int n; cin >> n;
	order a[n];
	int dp[n];
	for (int i=0; i<n; ++i){
		cin >> a[i].s >> a[i].d >> a[i].p;
		a[i].e = a[i].E();
	}
	sort (a,a+n,cmp);
	for (int i=0; i<n; ++i){
		dp[i] = a[i].p; int mx = 0;
		for (int j=0; j<i; ++j){
			if (a[j].e <= a[i].s) mx = max(dp[j],mx);
		}
		dp[i] = mx + a[i].p;
	}
	cout << *max_element(dp,dp+n) << endl;
}
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
	int t; cin >> t;
	while (t--) solve();
}
