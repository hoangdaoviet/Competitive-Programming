#include <iostream>
#include <cstdio>
using namespace std;
int x,y,m,ans;
int main()
{
    freopen("pails.in","r",stdin);
	  freopen("pails.out","w",stdout);
    cin >> x >> y >> m;
    for (int i=0; i<=1000; i++){
        if (x*i>m) break;
        for (int j=0; j<=1000; j++){
            int n=x*i+y*j;
            if (n>m) break;
            ans=max(ans,n);
        }
    }
    cout << ans;
}
