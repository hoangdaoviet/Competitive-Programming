#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("LATBAI.INP","r",stdin);
    freopen("LATBAI.OUT","w",stdout);
    long long n,m; cin >> n >> m;
    cout << abs((n-2)*(m-2));
}
