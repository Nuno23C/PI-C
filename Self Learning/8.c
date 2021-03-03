#include <stdio.h>
#include <stdlib.h>

// Dado um inteiro não-negativo n, determinar n!

void main () {
    int n, soma, num;

    printf("Introduza um numero inteiro e nao negativo para calcular o seu fatorial: ");
    scanf("%d", &n);

    num = n; // apenas para poder usar ao mostrar na resposta
    soma = 1;

    while(n != 0){
        soma = soma * n;
        n--;
    }

    printf("%d! = %d\n", num, soma);
    system("pause");
}
