/* Filipe Gonçalves
   URI - 1170 */
#include <iostream>
using namespace std;
int main(void){

	short int n, cont;
	float c;

	cin >> n;
	while(n--){
		cin >> c;
		cont = 0;
		while(c > 1){
			c /= 2;
			cont++;
		}
		cout << cont << " dias" << endl;
	}

	return 0;
}