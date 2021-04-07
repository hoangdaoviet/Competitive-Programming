
#include <iostream>
#include <cstdio>
using namespace std;
int n;
int luythua(int a, int b)
{
    if (b == 0) return 1;
    else if (b % 2 == 0) return luythua(a, b/2) * luythua(a, b/2);
    else return a * luythua(a, b/2) * luythua(a, b/2);
}
void solve() //khử đệ quy
{
    n = n - 6;
    int k = 2;
    while (n > k * (luythua(10, k) - luythua(10, k-1))){
        n = n - k * (luythua(10, k) - luythua(10, k-1));
        k++;
    }
    cout << n / k + luythua(10, k-1) - 1;
}
int main()
{
    freopen("SOTRANG.INP","r",stdin);
    freopen("SOTRANG.OUT","w",stdout);
    cin >> n;
    if (n <= 6) cout << 4 + (n - 1);
    else solve();
}
