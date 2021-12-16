#include <bits/stdc++.h>
//#define DEBUG
using namespace std;
int n,m;
vector<vector<int> > g;
vector<bool> vis;
vector<int> con;
void dfs(int u)
{
	vis[u] = true;
	for (int i=0; i<g[u].size(); ++i){
		int v = g[u][i];
		if (!vis[v]){
			dfs(v);
		}
	}
}
int components()
{
	con.resize(n);
	int cnt = 0;
	for (int i=1; i<=n; ++i){
		if (!vis[i]){
			con[cnt++] = i;
			dfs(i);
		}
	}
	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifdef DEBUG
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif // DEBUG
	cin >> n >> m;
	g.resize(n+1);
	vis.resize(n+1);
	while (m--){
		int u,v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans = components();
	cout << ans - 1 << '\n';
	for (int i=1; i<ans; ++i){
		cout << con[i-1] << ' ' << con[i] << '\n';
	}
}

