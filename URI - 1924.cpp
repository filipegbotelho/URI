#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main(){
	vector <string> curso;
	string nome;
	
	unsigned short int T;
	
	cin >> T;
	while(T--){
		cin >> nome;
		curso.push_back(nome);
	}
	printf("Ciencia da Computacao\n");
	
	
	return 0;
}