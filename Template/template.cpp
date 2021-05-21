#include <bits/stdc++.h>
using namespace std;

//data type, constant and others
using ll = long long; // C++ 11 and after
const long long oo = 1e18; // you can use INF for the sake of synchronization from various competitive programmers
const string yes = "YES\n";
const string no = "NO\n";
#define endl '\n'
const string name="";

//vector
using vi = vector<int>;
using vl = vector<ll>;
#define all(x) begin(x), end(x) // C++ 11 and after
#define sz(x) int((x).size()) // must have the parentheses, here is the reason why https://stackoverflow.com/questions/22155634/using-parentheses-in-define-preprocessor-statements/22155766
#define pb push_back
//#define pop pop_back() don't define this, bad practice

//#define rsz resize
// Resizes are rarely used, not necessary to define

//for loop
// use postfix increment/decrement operator for speed and better optimization
// http://www.cs.technion.ac.il/users/yechiel/CS/FAQs/c++-faq/increment-pre-post-speed.html
#define FOR(i,a,b) for (int i = (a); i <= (b); ++i) // Less than or equal?, should be less than
#define ROF(i,a,b) for (int i = (a); i >= (b); --i) // (a)-1?
// No need to cast to int lol
#define each(i,a) for(auto& i : a) // C++ 11 and after
// You shoud add some spaces to enhance readability both for you and for others

//debug
#define dbg(x) cout << #x << ": " << x << '\n'; 
// CERR PLEASE, what would happen if you forgot to remove those debugging lines
// CERR will save your ass in that case, though it may cause the program to run slower in case the output is enormous

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); // or cin.tie(0)->sync_with_stdio(0);
	#ifdef DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	#ifdef OFFLINE
	freopen((name+".inp").c_str(),"r",stdin);
	freopen((name+".out").c_str(),"w",stdout);
	#endif
	int n, m; 
	cin >> n >> m; 
	cout << n + m;
	// Use TAB character instead of TAB indents (4-space indents) please!!!
}
