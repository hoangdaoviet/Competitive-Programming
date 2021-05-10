#include <bits/stdc++.h>
using namespace std;

const string NAME=""; ///nhớ đặt tên lmao
const int TEST=100;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

long long Rand(long long l,long long h)
{
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

int main()
{
    for (int itest=1; itest<=TEST; itest++){
        ofstream fout((NAME+".INP").c_str());
        ///sinh test ở đây
        fout.close();
        system((NAME+".exe").c_str());
        system((NAME+"_BRUTE.exe").c_str());
        if (system(("fc " + NAME + ".OUT " + NAME + "_BRUTE.OUT").c_str()) != 0){
            cout << "Test " << itest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << itest << ": CORRECT!\n";
    }
    return 0;
}
