#include <iostream>
#include <cstdio>
using namespace std;
int n;
string a,b;
int main()
{
    freopen("breedflip.in","r",stdin);
    freopen("breedflip.out","w",stdout);
    cin >> n >> a >> b;
    int cnt=0;
    bool flag=false;
    for (int i=0; i<n; i++){
        if (b[i]!=a[i]){
            if (!flag){
                flag=true;
                cnt++;
            }
        }
        else {
            flag=false;
        }
    }
    cout << cnt << '\n';
}
