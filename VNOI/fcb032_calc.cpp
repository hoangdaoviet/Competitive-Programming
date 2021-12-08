#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const string yes = "yes\n", no = "no\n";
ll a1,a2,a3;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int c = 2;
	while (c--){
		cin >> a1 >> a2 >> a3;
		if (a1 + a2 - a3 == 0){
			cout << yes;
		}
		else if (a1 + a3 - a2 == 0){
			cout << yes;
		}
		else if (a2 + a1 - a3 == 0){
			cout << yes;
		}
		else if (a2 + a3 - a1 == 0){
			cout << yes;
		}
		else if (a3 + a1 - a2 == 0){
			cout << yes;
		}
		else if (a3 + a2 - a1 == 0){
			cout << yes;
		}
		else {
			cout << no;
		}
	}
}
