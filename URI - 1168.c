/* Filipe Gonçalves
   URI - 1168*/
#include <stdio.h>
int main(void){
    int n, i, j, soma;
    char numero[100];
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf(" %[^\n]s", numero);
        j = 0;
        soma = 0;
        while(numero[j] != '\0'){
            if (numero[j] == '0')
                soma += 6;
            else if (numero[j] == '1')
                soma += 2;
            else if (numero[j] == '2')
                soma += 5;
            else if (numero[j] == '3')
                soma += 5;
            else if (numero[j] == '4')
                soma += 4;
            else if (numero[j] == '5')
                soma += 5;
            else if (numero[j] == '6')
                soma += 6;
            else if (numero[j] == '7')
                soma += 3;
            else if (numero[j] == '8')
                soma += 7;
            else
                soma += 6;
            j++;
        }
        printf("%i leds\n", soma);
    }
    return 0;
}