#include <bits/stdc++.h>
using namespace std;

//data type, constant and others
using ll = long long;
const long long INF = 1e18;
const string yes = "YES\n", no = "NO\n";
const string name="";
#define endl '\n'

//vector
using vi = vector<int>;
using vl = vector<ll>;
#define all(x) begin(x), end(x)
#define sz(x) int((x).size())

//for loop
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ROF(i,a,b) for (int i = (a); i > (b); --i)
#define each(i,a) for(auto& i : a) 

//debug
#define dbg(x) cerr << #x << ": " << x << '\n'; 

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
	int n, m; 
	cin >> n >> m; 
	cout << n + m;
}
