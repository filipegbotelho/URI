#include <bits/stdc++.h>

using namespace std;
int main(){
	unsigned short int QT;
	long long int N, M;
	string nome[2];
	string opc[2];
	
	cin >> QT;
	while(QT--){
		cin >> nome[0] >> opc[0] >> nome[1] >> opc[1];	
		cin >> N >> M;
		
		if ((N + M) % 2 == 0){
			if (opc[0] == "PAR")
				cout << nome[0] << endl;
			else
				cout << nome[1] << endl;
		}
		else{
			if (opc[0] == "IMPAR")
				cout << nome[0] << endl;
			else
				cout << nome[1] << endl;
		}
	}
	
	
	
	return 0;
}