#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exercício 1
int vogal (char s) {
    int acc;

    acc = 0;

    if (s == 'A' || s == 'a' || s == 'E' || s == 'e' || s == 'I' || s == 'i' || s == 'O' || s == 'o' || s == 'U' || s == 'u')
        acc++;

    return acc;
}

int contaVogais (char *s) {
    int i, r;

    r = 0;

    for (i = 0; s[i]; i++) {
       r += vogal(s[i]);
    }

    return r;
}

// Exercício 2
int retiraVogaisRep (char *s) {
    int i, j, repetidas;
    char newstr[strlen(s) + 1];

    i = 0;
    j = 0;
    repetidas = 0;

    while (s[i]) {
        if (vogal(s[i]) == 1 && s[i] == s[i + 1]) {
            i++;
            repetidas ++;
        } else if (vogal(s[i]) == 1 && s[i] != s[i + 1]) {
            newstr[j] = s[i];
            i ++;
            j ++;
        } else {
            newstr[j] = s[i];
            i ++;
            j++;
        }
    }

    newstr[j] = '\0';

    printf("%s\n", newstr);

    return repetidas;
}

// Exercício 3
int duplicaVogais (char *s) {
    int i, j, acrescentadas;
    char newstr[30];

    i = 0;
    j = 0;
    acrescentadas = 0;

    while (s[i]) {
        if (vogal(s[i]) == 1) {
            newstr[j] = s[i];
            j++;
            newstr[j] = s[i];
            j++;
            i++;
            acrescentadas++;
        } else {
            newstr[j] = s[i];
            j++;
            i++;
        }
    }

    newstr[j] = '\0';

    printf("%s\n", newstr);

    return acrescentadas;
}

// Exercício 4
int ordenado (int v[], int N) {
    int i;

    i = 0;

    while (i < N) {
        if (v[i] < v[i+1])
            i++;
        else {
            printf("Nao esta ordenado!\n");
            return 0;
        }
    }
    printf("Esta ordenado!\n");

    return 0;
}

// Exercício 5
void merge(int a[], int na, int b[], int nb, int r[]){
	int ia, ib, ir;

    ia = ib = 0;

    for (ir = 0, ia = 0, ib = 0; ia < na && ib < nb; ir++) {
        if (a[ia] <= b[ib]) {
            r[ir] = a[ia];
            ia++;
        }else{
            r[ir] = b[ib];
            ib++;
        }
    }

    // a ainda tem elementos
    for (; ia < na; ir++, ia++)
        r[ir] = a[ia];

    // b ainda tem elementos
    for (; ib < nb; ir++, ib++)
        r[ir] = b[ib];
}

// Exercício 6
int partition(int v[], int N, int x){
	int array[N];
	int i = 0, j = N-1;
	int k;

	for(k = 0; v[k]; k++){
		if(v[k] <= x){
			array[i] = v[k];
			i++;
		} else {
			array[j] = v[k];
			j--;
		}
	}

	while(k>=0){
		v[k] = array[k];
		k++;
	}
	return i;
}


int main () {
    int optn, r;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    int array1[4] = {30,60,90};
    int array2[7] = {10,20,50,70,100,120};


    printf("Introduza o numero da pergunta: ");
    scanf("%d", &optn);

    switch(optn) {
        case 1:
            r = contaVogais("Jacinto o Macaco");

            printf("Resultado = %d\n", r);

            break;

        case 2:
            r = retiraVogaisRep("Jaciintoo o Maacaco");

            printf("Vogais repetidas = %d\n", r);

            break;

        case 3:
            r = duplicaVogais("Jacinto o Macaco");

            printf("Vogais adicionadas = %d\n", r);

            break;

        case 4:
            ordenado(v, 10);

            break;

        case 5:

            break;

        default:
            printf("Questao invalida!\n");
            break;
    }

    return 0;
}
