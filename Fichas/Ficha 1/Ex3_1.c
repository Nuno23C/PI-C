#include <stdio.h>
#include <stdlib.h>

void quadrado (int n) {
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            putchar('#');
        }
    printf("\n");
    }
}

int main () {
    int n;

    printf("Introduza um numero: ");
    scanf("%d", &n);

    quadrado(n);

    return 0;
}
