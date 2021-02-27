#include <stdio.h>
#include <stdlib.h>

void trianguloVertical (int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++) {
            putchar('#');
        }
        printf("\n");
    }

    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            putchar('#');
        }
        printf("\n");
    }
}

void trianguloHorizontal (int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {

        for (j = n - 1; j > i ; j--) {
            putchar(' ');
        }

        for (k = 1; k < 2 * (i + 1); k++) {
            putchar('#');
        }

        putchar('\n');

    }
}

int main () {
    int n;

    printf("Introduza um numero: ");
    scanf("%d", &n);

    trianguloVertical(n);

    printf("\n\n");

    trianguloHorizontal(n);

    return 0;
}
