#include <stdio.h>
#include <stdlib.h>

// Dados um inteiro x e um inteiro não-negativo n, calcular x^n.

void main () {
    int x, n, potencia, i;

    printf("\nCalculo de uma potencia\n\n");

    printf("Introduza uma base inteira: ");
    scanf("%d", &x);

    printf("Introduza um expoente inteiro e nao negativo: ");
    scanf("%d", &n);

    potencia = 1;

    for(i = 0; i != n; i++){
        potencia = potencia * x;
    }

    printf("Resultado = %d", potencia);
}
