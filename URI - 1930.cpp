#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned short int T[4], i, res;
	
	for (res = i = 0; i < 4; i++){
		cin >> T[i];
		res += T[i];
	}
	cout << res - 3 << endl;
	
	return 0;
}