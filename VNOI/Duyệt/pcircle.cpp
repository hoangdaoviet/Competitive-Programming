#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
using ll=long long;
using vi=vector <int>;
int n,pos; vector <vi> ans; vi a,num; bool used[21];
vi prime{2,3,5,7,11,13,17,19,23,29,31,37,41};
void backtrack(int k)
{
    if (k > 1 && binary_search(all(prime), a[k-1]+a[k-2]) == false) return;
    if (k == 2*n){
        if (binary_search(all(prime), a.front()+a.back())){
            if (pos < 10000) ans[pos] = a;
            pos++;
        }
        return;
    }
    for (auto &i: num){
        if (not used[i]){
            a[k] = i; used[i] = true;
            backtrack(k+1); used[i] = false;
        }
    }
    return;
}

int main()
{
    scanf("%d", &n);
    a.resize(2*n); a[0]=1;
    num.resize(2*n-1); iota(all(num),2);
    ans.resize(10000);
    backtrack(1);
    printf("%d\n", pos);
    for (int i=0; i<min(10000,pos); i++){
        for (auto &res: ans[i]) printf("%d ", res);
        printf("\n");
    }
    return 0;
}
