#include <iostream>
#include <cstdio>
using namespace std;
int n,k,x[15];
bool c[15];

void check(int i, int k)
{
    for (int i=1; i<=k; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try(int i,int k)
{
    for (int j=1; j<=n; j++){
        if (!c[j]){
            x[i]=j;
            if (i==k) check(i,k);
            else{
                c[j]=true;
                Try(i+1,k);
                c[j]=false;
            }
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++){
        Try(1,i);
    }
}
