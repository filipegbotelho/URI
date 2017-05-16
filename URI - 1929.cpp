#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	vector<unsigned short int> N;
	int num, som[2];
	
	for (int i = 0; i < 4; i++){
		cin >> num;
		N.push_back(num);
	}
	
	sort(N.begin(), N.end());
	
	som[0] = N[0] + N[1];
	som[1] = N[1] + N[2];
	
	printf((som[0] > N[2]) || (som[1] > N[3]) ? "S\n" : "N\n");
	 
	
	return 0;
}