/* Filipe Gonçalves
   URI - 1805 */
#include <iostream>
using namespace std;
int main(void){
	long long int a, b, soma;
	
	cin >> a >> b;
	soma = (a + b) * (b - a + 1) / 2;
	cout << soma << endl;
	
	return 0;
}