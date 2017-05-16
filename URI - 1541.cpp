#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
	unsigned short int A, B, C;
	
	while(cin >> A >> B >> C){
		printf("%i\n",(int) sqrt((A * B) * 100 / C));
	}
	
	
	return 0;
}