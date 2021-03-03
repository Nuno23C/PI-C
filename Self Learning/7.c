#include <stdio.h>
#include <stdlib.h>

// Dados n e uma sequência de n números inteiros, determinar a soma dos números pares.

void main () {
    int n, num, i, soma;

    printf("\nSoma dos numeros pares!\n\n");
    printf("Quantos numeros? ");
    scanf("%d", &n);

    soma = 0;

    for(i = 1; i <= n; i++){
        printf("Numero %d = ", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            soma = soma + num;
        }else{
            soma = soma;
        }
    }
    printf("Soma = %d", soma);
}
