#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    long long T[n+1];
    long long S=0;
    for (int i=1;i<=n;i++){
        T[i]=i*i-(i-1)*(i-1);
        S+=T[i];
    }
    cout << S;
}
