#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);
    int n; cin >> n;
    vector <int> x(n+1,0);
    vector <int> y(n+1,0);
    for (int i=1; i<=n; i++){
        cin >> x[i] >> y[i];
    }
    int ans=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            for (int k=1; k<=n; k++){
                if (y[i]==y[j] && x[i]==x[k]){
                    int area=(x[j]-x[i])*(y[k]-y[i]);
                    if (area<0) area *=-1;
                    ans=max(ans,area);
                }
            }
        }
    }
    cout << ans;
}
