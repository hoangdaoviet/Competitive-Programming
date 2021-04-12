#include <bits/stdc++.h>

using namespace std;
const int maxn=200001;
int N,M,l[maxn],r[maxn],s[maxn],score;
bool rib[maxn],temp[maxn];

void solve()
{
    for (int i=1; i<=N; i++){
        for (int j=l[i]; j<=r[i]; j++){
            temp[j]=1;
        }
        if (*min_element(temp+1,temp+M+1)){
            for (int k=1; k<=M; k++){
                temp[k]=rib[k];
            }
        }
        else {
            for (int k=1; k<=M; k++){
                rib[k]=temp[k];
            }
            score+=s[i];
        }
    }
    cout << score;
}
int main()
{
    cin >> N >> M;
    for (int i=1; i<=N; i++){
        cin >> l[i] >> r[i] >> s[i];
    }
    solve();
}
