#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;
string s;
vector <string> perm;
void print()
{
    for (int i=0; i<perm.size(); i++){
        cout << perm[i];
    }
    cout << '\n';
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s;
    sort(s.begin(),s.end());
    do{
        perm.push_back(s);
    }
    while (next_permutation(s.begin(),s.end()));
    cout << perm.size() << '\n';
    for (int i=0; i<perm.size(); i++){
        cout << perm[i] << '\n';
    }
}
