#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned short int T, cont;
	int PA, PB;
	float G1, G2;
	
	cin >> T;
	
	while(T--){
		cin >> PA >> PB >> G1 >> G2;
		cont = 0;
		while(PA <= PB){
			PA += (int) PA * G1/100;
			PB += (int) PB * G2/100;
			cont++;
			if (cont > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if (cont <= 100)
			printf("%i anos.\n", cont);
	}
	
	
	
	return 0;
}