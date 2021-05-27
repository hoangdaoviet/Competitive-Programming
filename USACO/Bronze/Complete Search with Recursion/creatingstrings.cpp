#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;
string s;
vector <string> perm;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> s;
    sort(s.begin(),s.end());
    do{
        perm.push_back(s);
    }
    while (next_permutation(s.begin(),s.end()));
    cout << perm.size() << '\n';
    for (auto i : perm){
        cout << i << '\n';
    }
}
