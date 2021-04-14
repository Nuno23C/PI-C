#include <stdio.h>
#include <stdlib.h>

// Exercício 1
/*
// a)
Output:
1 1 4
2 2 6
3 3 8
4 4 10
5 5 12

// b)
Output:
13
*/

void dumpV (int v[], int N) {
    int i;
    for (i = 0; i< N; i++)
        printf("%d ", v[i]);
    putchar ('\n');
}

// Exercício 2
void swapM (int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// Exercício 3
void swap (int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

// Exercício 4
int soma (int v[], int N) {
    int i, resultado = 0;

    for (i = 0; i < N; i++)
        resultado += v[i];

    return resultado;
}

// Exercício 5
void inverteArray1 (int v[], int N) {
    int i, j;

    for (i = 0, j = N-1; i < j; i++, j--) {
        swap(v,i,j);
    }
}

void inverteArray2 (int v[], int N) {
    int i, j;

    for (i = 0, j = N-1; i < j; i++, j--) {
        swapM(&v[i],&v[j]);
    }
}

// Exercício 6
int maximum (int v[], int N, int *m) {
    int i;

    if (N <= 0)
        return 1;

    else {
        *m = v[0];

        for (i = 0; i < N; i++) {
            if(v[i] > *m)
                *m = v[i];
        }

    return 0;
    }
}

// Exercício 7
void quadrados (int v[], int N) {
    int i;

    for (i = 0; i < N; i++) {
        v[i] = i*i;
    }
}


int main () {
    int optn, n1, n2, r, i,
        v[10] = {1,2,3,4,5,6,7,8,9,10},
        resultado;

    printf("Introduza o numero da pergunta: ");
    scanf("%d", &optn);

    switch (optn) {
        case 2:
            printf("Introduza dois numeros: ");
            scanf("%d %d", &n1, &n2);

            swapM (&n1 , &n2);

            printf("%d %d\n", n1, n2);

            break;

        case 4:
            printf("Introduza um numero para adicionar: ");
            scanf("%d", &n1);

            resultado = soma (v,n1);

            printf("Resultado = %d", resultado);

            break;

        case 5:
            printf("Array inicial: "); dumpV(v,10);

            inverteArray2 (v,10); // ou inverteArray1 (v,10);

            printf("Array final: "); dumpV(v,10);

            break;

        case 6:
            r = 0;
            maximum(v,10,&r);

            printf("Resultado = %d", r);

            break;

        case 7:
            quadrados(v,10);

            for (i = 0; i < 10; i++) {
                printf("%d\n", v[i]);
            }
            break;

        default:
            printf("Questao Invalida!\n");

            break;
    }

    return 0;
}
