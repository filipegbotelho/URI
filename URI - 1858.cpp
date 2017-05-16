#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned short int N, i, menor, res;

	cin >> N;
	
	unsigned short int T[N];
	for (i = 0; i < N; i++){
		cin >> T[i];
	}
	
	menor = T[0];
	for (i = 1; i < N; i++){
		if (T[1] < menor){
			menor = T[i];
			res = i + 1;
		}
	}
	
	cout << res << endl;
	
		
	return 0;
}