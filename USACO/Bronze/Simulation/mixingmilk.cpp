#include <iostream>
#include <cstdio>
using namespace std;
const int N=3;
int m[N],c[N];
int main()
{
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    for (int i=0; i<N; i++){
        cin >> c[i] >> m[i];
    }
    for (int i=0; i<100; i++){
        int amt=min(m[i%N],c[(i+1)%N]-m[(i+1)%N]);
        m[i%N]-=amt;
        m[(i+1)%N]+=amt;
    }
    for (int i=0; i<N; i++){
        cout << m[i] << '\n';
    }
}
