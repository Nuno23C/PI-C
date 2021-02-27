#include <stdio.h>
#include <stdlib.h>

void xadrez (int n) {
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if (((i + j) % 2) == 0)
                putchar('#');
            else
                putchar('_');
        }
    printf("\n");
    }
}

int main () {
    int n;

    printf("Introduza um numero: ");
    scanf("%d", &n);

    xadrez(n);

    return 0;
}
