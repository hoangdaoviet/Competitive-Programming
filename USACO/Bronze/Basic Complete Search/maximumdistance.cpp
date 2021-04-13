#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=5001;
int n,x[maxn],y[maxn],ans;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x[i];
    }
    for (int i=1; i<=n; i++){
        cin >> y[i];
    }
    for (int i=1; i<=n-1; i++){
        for (int j=i+1; j<=n; j++){
            int dis=(x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            ans=max(ans,dis);
        }
    }
    cout << ans;
}
