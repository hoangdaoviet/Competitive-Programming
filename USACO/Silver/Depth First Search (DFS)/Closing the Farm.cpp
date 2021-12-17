#include <bits/stdc++.h>
//#define DEBUG
using namespace std;
const int maxn = 3011;
int n,m;
vector<vector<int> > g;
bool vis[maxn], close[maxn];
void dfs(int u)
{
	vis[u] = 1;
	for (auto v : g[u]){
		if (close[v]) continue;
		if (!vis[v]) dfs(v);
	}
}

void check(int x)
{
	close[x] = 1;
	int components = 0;
	memset(vis,0,sizeof(vis));
	for (int i=1; i<=n; ++i){
		if (close[i]) continue;
		if (!vis[i]){
			components++;
			dfs(i);
		}
	}
	//cout << components << '\n';
	cout << (components == 1 ? "YES" : "NO") << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifdef DEBUG
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif // DEBUG
	freopen("closing.in","r",stdin);
	freopen("closing.out","w",stdout);
	cin >> n >> m;
	g.resize(n + 1);
	for (int i=1; i<=m; ++i){
		int u,v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	check(0);
	for (int i=1; i<=n; ++i){
		if (i == n) continue;
		int x; cin >> x;
		check(x);
	}
}
