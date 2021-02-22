#include <stdio.h>
#include <stdlib.h>

// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. (termina quando chega a 0)

void main () {
    int n, quadrado;

    printf("\nCalculo dos quadrados de uma sequencia de numeros\n\n");
    printf("Introduz uma sequecia de numeros (0 para terminar): ");
    scanf("%d", &n);

    while(n != 0){
        quadrado = n * n;
        printf("O quadrado de %d = %d\n", n, quadrado);
        printf("Proximo numero: ");
        scanf("%d", &n);
    }
    system("pause");
}
