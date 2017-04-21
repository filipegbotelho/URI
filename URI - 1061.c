/* Filipe Gonçalves
   URI - 1061 */

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(void){
    int dia[2], hora[2], minuto[2], segundo[2], soma[2], diferenca;
    char data[4], dias[2][4];

    cin >> dias[0] >> dia[0];
    cin >> hora[0] >> data[0] >> minuto[0] >> data[0] >> segundo[0];
    cin >> dias[1] >> dia[1];
    cin >> hora[1] >> data[1] >> minuto[1] >> data[1] >> segundo[1];
    soma[0] = (dia[0] * 86400) + (hora[0] * 3600) + (minuto[0] * 60) + (segundo[0]);
    soma[1] = (dia[1] * 86400) + (hora[1] * 3600) + (minuto[1] * 60) + (segundo[1]);
    diferenca = soma[1] - soma[0];
    cout << diferenca/86400 <<" dia(s)" << endl;
    cout << diferenca%86400/3600 << " hora(s)" << endl;
    cout << diferenca%86400%3600/60 << " minuto(s)" << endl;
    cout << diferenca%86400%3600%60 << " segundo(s)" << endl;
    return 0;
}
