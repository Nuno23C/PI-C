#include <stdio.h>
#include <stdlib.h>

// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

void main () {
    int n, impares;

    printf("\nImprime os n primeiros numeros impares\n\n");
    printf("Introduza um numero inteiro positivo: ");
    scanf("%d", &n);
    impares = 1;

    while(n != 0){
        printf("%d\n", impares);
        impares = impares + 2;
        n = n - 1;
    }
}
