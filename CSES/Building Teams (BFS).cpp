#include <bits/stdc++.h>
 
#define vi vector<int>
#define pb(x) push_back(x)
//#define DEBUG
 
using namespace std;
 
const int maxn = 1e5 + 11;
int n,m;
vector<vi> g;
 
bool vis[maxn];
int col[maxn];
queue<int> q;
bool bipartite = true;
 
bool bfs(int x)
{
	vis[x] = 1;
	col[x] = 1;
	q.push(x);
	while(!q.empty()){
		int u = q.front(); q.pop();
		for (int i=0; i<(int)g[u].size(); ++i){
			int v = g[u][i];
			if (col[v] == col[u]) return 0;
			if (vis[v]) continue;
			vis[v] = 1;
			col[v] = (col[u] == 1? 2 : 1);
			q.push(v);
		}
	}
	return 1;
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
	g.resize(n + 1);
	while(m--){
		int u,v; cin >> u >> v;
		g[u].pb(v); g[v].pb(u);
	}
	for (int i=1; i<=n; ++i){
		if (!vis[i]){
			if (!bfs(i)){
				cout << "IMPOSSIBLE"; return 0;
			}
		}
	}
	for (int i=1; i<=n; ++i){
		cout << col[i] << ' ';
	}
}
