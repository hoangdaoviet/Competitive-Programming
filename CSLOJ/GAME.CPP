#include <iostream>

using namespace std;

int main() {
    long long n, m, ans = 0;
    cin >> n >> m;
    if (n % 2 == 0) {
        if (m % 2 == 0) {
            ans = (n * m) / 4;
        } else {
            ans = (n * (m - 1)) / 4 + n / 2;
        }
    } else {
        if (m % 2 == 0) {
            ans = ((n - 1) * m) / 4 + m / 2;
        } else {
            ans = ((n - 1) * (m - 1)) / 4 + (m - 1) / 2 + (n - 1) / 2 + 1;
        }
    }
    cout << ans;
}
