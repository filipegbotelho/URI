#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
	unsigned short int NUM, P, Q;
	double soma;
	
	cin >> NUM;
	
	soma = 0;
	while(NUM--){
		cin >> P >> Q;
		switch(P){
			case 1001:
				soma +=(double) Q * 1.5;
				break;
			case 1002:
				soma +=(double) Q * 2.5;
				break;
			case 1003:
				soma +=(double) Q * 3.5;
				break;
			case 1004:
				soma +=(double) Q * 4.5;
				break;
			case 1005:
				soma +=(double) Q * 5.5;
				break;
					default:
			break;
		}
	}
	
	cout << setprecision(2) << fixed << soma << endl;
	
	return 0;
}