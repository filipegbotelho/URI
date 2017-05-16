#include <bits/stdc++.h>

using namespace std;

int main(){
	string raj, sheldon;
	unsigned short int T, i;
	
	cin >> T;
	
	for (i = 1; i <= T; i++){
		cin >> sheldon >> raj;
		
		printf("Caso #%i: ", i);
		
		if (sheldon == raj) 
			printf("De novo!\n");
		else if (sheldon == "tesoura" && raj == "papel")
			printf("Bazinga!\n");
		else if (sheldon == "papel" && raj == "pedra")
			printf("Bazinga!\n");
		else if (sheldon == "pedra" && raj == "lagarto")
			printf("Bazinga!\n");
		else if (sheldon == "lagarto" && raj == "Spock")
			printf("Bazinga!\n");
		else if (sheldon == "Spock" && raj == "tesoura")
			printf("Bazinga!\n");
		else if (sheldon == "tesoura" && raj == "lagarto")
			printf("Bazinga!\n");
		else if (sheldon == "lagarto" && raj == "papel")
			printf("Bazinga!\n");
		else if (sheldon == "papel" && raj == "Spock")
			printf("Bazinga!\n");
		else if (sheldon == "Spock" && raj == "pedra")
			printf("Bazinga!\n");
		else if (sheldon == "pedra" && raj == "tesoura")
			printf("Bazinga!\n");
		else
			printf("Raj trapaceou!\n");
	}
	
	
	
	return 0;
}