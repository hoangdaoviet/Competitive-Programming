#include <bits/stdc++.h>
using namespace std;
int s1,s2,s3,cnt,res,sum[100];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s1 >> s2 >> s3;
    for (int i=1; i<=s1; i++){
        for (int j=1; j<=s2; j++){
            for (int k=1; k<=s3; k++){
                sum[i+j+k]++;
            }
        }
    }
    for (int i=3; i<=s1+s2+s3; i++){
        if (sum[i]>cnt){
            cnt=sum[i]; res=i;
        }
    }
    cout << res;
}
