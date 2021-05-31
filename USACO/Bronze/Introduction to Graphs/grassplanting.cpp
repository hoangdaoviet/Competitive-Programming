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
const string name="planting";
//#define DEBUG
#define OFFLINE

int n, u[100005], v[100005], deg[100005];

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	#ifdef DEBUG
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	#ifdef OFFLINE
		freopen((name+".in").c_str(),"r",stdin);
		freopen((name+".out").c_str(),"w",stdout);
	#endif

	cin >> n;
	for (int i=1; i<=n-1; ++i){
		cin >> u[i] >> v[i];
	}
	for (int i=1; i<=n; ++i){
		deg[u[i]]++;
		deg[v[i]]++;
	}
	cout << *max_element(all(deg)) + 1;
}
