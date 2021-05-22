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
#define OFFLINE
const string name="cowtip";

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
	int n; cin >> n;
	vector <string> cow(n);
	for (int i=0; i<n; i++){
		cin >> cow[i];
	}
	int ans=0;
	for (int i=n-1; i>=0; --i){
		for (int j=n-1; j>=0; --j){
			if (cow[i][j] == '1'){
				for (int a=0; a<=i; ++a){
					for (int b=0; b<=j; ++b){
						cow[a][b] = (cow[a][b] == '1' ? '0' : '1');
					}
				}
				ans++;
			}
		}
	}
	cout << ans;
}
