#include <bits/stdc++.h>

using namespace std;
int main(){
	unsigned short int T, CHA[5], i, qtd;
	
	cin >> T;
	for (i = 0; i < 5; i++){
		cin >> CHA[i];		
	}
	
	qtd = 0;
	for (i = 0; i < 5; i++){
		if (CHA[i] == T)
			qtd++;		
	}
	
	cout << qtd << endl;
	

	
	
	return 0;
}