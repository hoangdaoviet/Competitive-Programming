#include <bits/stdc++.h>
using namespace std;

//data type, constant and others
using ll = long long;
const long long oo = 1e18;
const string yes = "YES";
const string no = "NO";
#define endl '\n'
const string name="";

//vector
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define pb push_back
#define pop pop_back()
#define rsz resize

//for loop
#define FOR(i,a,b) for (int i=int(a); i<=int(b); i++)
#define ROF(i,a,b) for (int i=int(a); i>=int(b); i--)
#define each(i,a) for(auto &i:a)

//debug
#define dbg(x) cout << #x << ": " << x << '\n';

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    #ifdef DEBUG
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    #ifdef OFFLINE
        freopen((name+".inp").c_str(),"r",stdin);
        freopen((name+".out").c_str(),"w",stdout);
    #endif
    int n, m; cin >> n >> m; cout << n + m;
}
