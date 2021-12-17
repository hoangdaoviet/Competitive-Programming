#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=101;
int n,p[maxn];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> p[i];
    }
    int ans=0;
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            int total=0;
            for (int k=i; k<=j; k++){
                total+=p[k];
            }
            bool found=false;
            for (int k=i; k<=j; k++){
                if (p[k]*(j-i+1)==total){
                    found=true;
                }
            }
            if (found) ans++;
        }
    }
    cout << ans;
}
