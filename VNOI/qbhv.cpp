#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    sort(s.begin(),s.end());
    vector <string> res;
    int k = 0;
    do {
        k++;
        res.push_back(s);
    }
    while (next_permutation(s.begin(),s.end()));
    cout << k << '\n';
    for (auto c : res){
        cout << c << '\n';
    }
}
