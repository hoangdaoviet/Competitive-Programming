#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ifstream cin ("cowsignal.in");
    ofstream cout ("cowsignal.out");
    int m,n,k;
    cin >> m >> n >> k;
    for (int i=0; i<m; i++){
        string s; cin >> s;
        for (int u=0; u<k; u++){
            for (int j=0; j<n; j++){
                for (int t=0; t<k; t++){
                    cout << s[j];
                }
            }
            cout << endl;
        }
    }
}
