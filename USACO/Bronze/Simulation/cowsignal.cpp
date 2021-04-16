#include <iostream>
#include <cstdio>
using namespace std;
int N,M,K;
int main()
{
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    cin >> M >> N >> K;
    for (int i=0; i<M; i++){
		string signal; cin >> signal;
		for(int it = 0; it < K; it++){
			for(int j = 0; j < N; j++){
				for(int k = 0; k < K; k++){
					cout << signal[j];
				}
			}
			cout << endl;
		}
    }
}
