#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int N;
	long long int T, res;
	
	cin >> N;
	
	while(N--){
		cin >> T;
		res = fabs(T - 2014);
		if (T > 2014)
			printf("%lld A.C.\n", res);
		else
			printf("%lld D.C.\n", res+1);
	}
	
	
	return 0;
}