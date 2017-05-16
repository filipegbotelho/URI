#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned short int N;
	
	pair <string, int> tent;
	cin >> N;
	while(N--){
		cin >> tent.first >> tent.second;
		printf(tent.first == "Thor" ? "Y\n" : "N\n");
	}
	
	
	return 0;
}