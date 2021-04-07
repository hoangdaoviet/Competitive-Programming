#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string s,t,temp; int k;
#define sz(x) int(x.size())

void setIO(string name = "")
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    if (name.size()){
        freopen((name+".inp").c_str(),"r",stdin);
        freopen((name+".out").c_str(),"w",stdout);
    }
}

int main()
{
    setIO("");
    cin >> s;
    if (!sz(s)){
        cout << 0; return 0;
    }
    for (int i=1; i<=sz(s); i++){
        if (sz(s)%i==0){
            temp="";
            k=sz(s)/i;
            t=s.substr(0,i);
            for (int j=0;j<k;j++){
                temp+=t;
            }
            if (temp==s){
                cout << k << t; return 0;
            }
        }
    }
    return 0;
}
