#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
int n,cnt;
vi a;
bool u[20];
int snt[]={3,5,7,11,13,17,19,23,29,31,37,41};
int res[]={0,1,2,2,4,96,1024,2880,81024,770144};

void solve(int k)
{

    if (k == n && binary_search(snt,snt+12,a[0] + a[k-1])){
        cnt++;
        if (cnt > 10000) return;
        for (auto x : a){
            cout << x << ' ';
        }
        cout << '\n';
    }
    for (int i=2; i<=n; ++i){
        if (!u[i] && binary_search(snt,snt+12,a[k-1] + i)){
            a[k] = i;
            u[i] = true;
            solve(k+1);
            u[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n; n *= 2;
    a.resize(n);
    cnt = 0;
    a[0] = 1;
    cout << res[n/2] << '\n';
    solve(1);
}
