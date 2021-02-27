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


int main () {
    int n;
    float m, resultado;

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%f", &m);

    resultado = multInt(n, m);

    printf("Resultado = %.02f\n", resultado);

    return 0;
}
