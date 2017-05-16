#include <bits/stdc++.h>

using namespace std;

int main(){
	
	unsigned short int N, teste[4], i, j, qtd;
	teste[0] = 2;
	teste[1] = 3;
	teste[2] = 4;
	teste[3] = 5;
	
	cin >> N;
	
	unsigned short int L[N];
	for (i = 0; i < N; i++){
		cin >> L[i];
	}
	
	for (j = 0; j < 4; j++){
		qtd = 0;
		for (i = 0; i < N; i++){
			if (L[i] % teste[j] == 0)
				qtd++;
		}
		cout << qtd << " Multiplo(s) de " << teste[j] << endl;
	}
	
	
	
	
	
	return 0;
}