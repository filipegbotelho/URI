/* Filipe Gonçalves
   URI - 2311*/
#include <stdio.h>
int main(void){
    int n, i;
    float nota, soma, grau, maior, menor;
    char nome[100];
    scanf("%i", &n);
    while(n--){
        scanf(" %s", nome);
        scanf("%f", &grau);
        soma = maior = 0;
        menor = 11;
        for (i = 0; i < 7; i++){
            scanf("%f", &nota);
            soma += nota;
            if (nota > maior)
                maior = nota;
            if (nota < menor)
                menor = nota;
        }
        soma = soma - (maior + menor);
        printf("%s %.2f\n", nome, soma*grau);
    }
    return 0;
}
