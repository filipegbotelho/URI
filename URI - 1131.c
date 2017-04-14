/* Filipe Gonçalves
   URI - 1131*/
#include <stdio.h>
int main(void){

    int in, gr, vit[2], emp, exit;
    in = gr = emp = vit[0] = vit[1] = 0;
    while (1){
        scanf("%i %i", &in, &gr);
        if (in > gr)
            vit[0]++;
        else if (gr > in)
            vit[1]++;
        else
            emp++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &exit);
        if (exit == 2)
            break;
    }
    printf("%i grenais\n", vit[0] + vit[1] + emp);
    printf("Inter:%i\n", vit[0]);
    printf("Gremio:%i\n", vit[1]);
    printf("Empates:%i\n", emp);
    if (vit[0] > vit[1])
        printf("Inter venceu mais\n");
    else if(vit[1] > vit[0])
        printf("Gremio venceu mais\n");
    else if (vit[1] == vit[0])
        printf("Nao houve vencedor\n");
    return 0;
}
