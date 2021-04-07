#include <bits/stdc++.h>
using namespace std;
int n, a[1000], b[1000], res=1000005;

int main()
{
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j) res=min(res,a[i]+b[j]);
            else res=min(res,max(a[i],b[j]));
        }
    }
    cout << res;
}
