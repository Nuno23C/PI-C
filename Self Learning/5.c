#include <stdio.h>
#include <stdlib.h>

// Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. 
// Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.

void main () {
    int quantidade, dias, maior, i, diaX;

    printf("Quantos dias tem o mes? ");
    scanf("%d", &dias);
    printf("\n");

    maior = 0;
    diaX = 0;

    for(i = 1; i <= dias; i++){
        printf("Quantos discos foram vendidos no dia %d? ", i);
        scanf("%d", &quantidade);

        if(maior < quantidade){
            maior = quantidade;
            diaX = i;
        }else{
            maior = maior;
            diaX = diaX;
        }
    }

    printf("\n\nO dia em que houve a maior venda foi no dia %d e a quantidade foi %d.\n", diaX, maior);
}
