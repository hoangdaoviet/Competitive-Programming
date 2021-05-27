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
int n, w[20];
ll solve(ll i, ll s1, ll s2)
{
	if (i == n) return abs(s1 - s2);
	else return min(solve(i + 1, s1 + w[i], s2), solve(i + 1, s1, s2 + w[i]));
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

	cin >> n;
	for (int i=0; i<n; i++){
		cin >> w[i];
	}
	cout << solve(0,0,0);
}
