#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int n, a[101];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("linetrip.inp","r",stdin);
    freopen("linetrip.out","w",stdout);
    a[0]=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort (a,a+n);
    cout << (abs(a[0]) + abs(a[n-1]))*2;
}
