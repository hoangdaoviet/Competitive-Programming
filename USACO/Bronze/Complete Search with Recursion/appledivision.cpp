#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
using ll=long long;
int n,p[21];
ll solve(int i, ll s1, ll s2)
{
    if (i==n+1){
        return abs(s1-s2);
    }
    else {
        return min(solve(i+1,s1+p[i],s2),solve(i+1,s1,s2+p[i]));
    }
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> p[i];
    }
    cout << solve(1,1,1);
}
