#include <stdio.h>
#include <stdlib.h>

// Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.

int main () {
    int n, i, soma;

    printf("\nSoma dos n primeiros numeros inteiros positivos\n\n");
    printf("Intoduza um numero: ");
    scanf("%d", &n);
    soma = 0;

    for(i = 1; i <= n; i++){
        soma = soma + i;
    }
    printf("A soma dos %d primeiros numeros inteiros positivos = %d\n", n, soma);
}
