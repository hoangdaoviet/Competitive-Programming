#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int n,a,b,cover,maxcover,numcover[1001];
vector<pair<int,int>> shift;

int main()
{
    freopen("lifeguards.in","r",stdin);
    freopen("lifeguards.out","w",stdout);
    cin >> n; shift.resize(n);
    for (int i=0; i<n; i++){
        cin >> a >> b;
        shift[i]=make_pair(a,b);
        for (int j=a; j<b; j++){
            numcover[j]++;
        }
    }
    for (pair<int,int> lifeguard : shift){
        for (int t=lifeguard.first; t<lifeguard.second; t++){
            numcover[t]--;
        }
        cover=0;
        for (int t=0; t<1000; t++){
            if (numcover[t]>0) cover++;
        }
        for (int t=lifeguard.first; t<lifeguard.second; t++){
            numcover[t]++;
        }
        maxcover=max(maxcover,cover);
    }
    cout << maxcover;
}
