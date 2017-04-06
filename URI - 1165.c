/* Filipe Gonçalves
   URI - 1165*/
#include <stdio.h>
int main(void){
    int numero, primo, i, k, indicador;
    scanf("%i", &numero);
    for (i = 0; i < numero; i++){
        scanf("%i", &primo);
        k = 1;
        indicador = 0;
        while(k < primo && indicador == 0){
            if (primo%k == 0 && k > 1)
                indicador = 1;
            k++;
        }
        if (indicador != 1)
            printf("%i eh primo\n", primo);
        else
            printf("%i nao eh primo\n", primo);
    }
    return 0;
}
