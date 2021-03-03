#include <stdio.h>
#include <stdlib.h>

// Exercício 1
float multInt (int n, float m) {
    int r;

    r = 0;

    while(n > 0){
        r += m;
        n--;
    }

    return r;
}

// Exercício 2
float multInt2 (int n, float m) {
    float r;

    r = 0;

    while(n >= 1){
        if (n % 2 == 0){
            n /= 2;
            m *= 2;
        }else{
            r += m;
            n /= 2;
            m *= 2;
        }
    }
    return r;
}

// Exercício 3



int main () {
    int opt, n;
    float m, resultado;

    printf("Introduza o numero da pergunta: ");
    scanf("%d", &opt);

    switch(opt){
        case 1:
            printf("n = ");
            scanf("%d", &n);

            printf("m = ");
            scanf("%f", &m);

            resultado = multInt(n, m);

            printf("Resultado = %.02f\n", resultado);

            break;

        case 2:
            printf("n = ");
            scanf("%d", &n);

            printf("m = ");
            scanf("%f", &m);

            resultado = multInt2(n, m);

            printf("Resultado = %.02f\n", resultado);

            break;

        case 3:

        default:
            break;
    }
    return 0;
}
