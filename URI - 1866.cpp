#include <bits/stdc++.h>

using namespace std;

int main(){
	int C;
	unsigned short int N;
		
	cin >> C;
	while(C--){
		cin >> N;
		printf(N % 2 == 0 ? "0\n" : "1\n");
	}
	
	return 0;
}