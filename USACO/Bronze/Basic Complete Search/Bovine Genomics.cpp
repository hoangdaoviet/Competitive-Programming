#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
string S[100],P[100];
bool checked(int k)
{
    int diff=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (S[i][k]!=P[j][k]){
                diff++;
            }
        }
    }
    return (diff==n*n);
}

int main()
{
    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> S[i];
    }
    for (int i=0; i<n; i++){
        cin >> P[i];
    }
    for (int k=0; k<m; k++){
        if (checked(k)) ans++;
    }
    cout << ans << '\n';
}
