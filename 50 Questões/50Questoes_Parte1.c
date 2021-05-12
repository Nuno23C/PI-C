#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// Exercício 1 - Maior elemento da sequência
void one () {
    int n = 1, n_max = 0;

    while(1) {
        printf("Introduza um numero (0 para terminar): ");
        scanf("%d", &n);

        if (n == 0)
            break;

        if(n > n_max)
            n_max = n;
    }

    printf("O maior numero = %d\n", n_max);
}

// Exercício 2 - Media da sequência
void two () {
    int n, i = 0;
    float soma = 0.0, media;

    while(1) {
        printf("Introduza um numero (0 para terminar): ");
        scanf("%d", &n);

        if (n == 0)
            break;

        soma += n;
        i++;
    }

    media = soma / i;

    printf("A media = %.2f\n", media);
}

// Exercício 3 - Segundo maior elemento de uma sequência
void three () {
    int n, n_max1 = 0, n_max2 = 0;

    while (1) {
        printf("Introduza um numero (0 para terminar): ");
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n > n_max1) {
            n_max2 = n_max1;
            n_max1 = n;
        } else if (n > n_max2) {
            n_max2 = n;
        }
    }

    printf("O segundo maior valor = %d\n", n_max2);
}

// Exercício 4 - Calcula o numero de bits iguais a 1 de um numero
int bitsUm (unsigned int n) {
    int uns;

    uns = 0;

    while(n > 0) {
        if (n % 2 == 1)
            uns++;
        n /= 2;
    }

    return uns;
}

// Exercício 5 - Calcula o numero de bits iguais a 0 de um numero
int trailingZ (unsigned int n) {
    int zeros;

    zeros = 0;

    while(n > 0) {
        if (n % 2 == 0)
            zeros++;
        n /= 2;
    }

    return zeros;
}

// Exercício 6 - Retorna o numero de digitos que um numero tem
int qDig (unsigned int n) {
    int digitos = 0;

    while (n > 1) {
        n = n / 10;
        digitos++;
    }

    return digitos;
}

// Exercício 7 - Concatena duas strings
char *mystrcat (char s1[], char s2[]){
    char newstr[strlen(s1) + strlen(s2)];
    int i, j;

    for (i = 0; i < strlen(s1); i++){
        newstr[i] = s1[i];
    }

    for (j = 0; j < strlen(s2); j++){
        newstr[i + j] = s2[j];
    }

    newstr[strlen(s1) + strlen(s2)] = '\0';

    printf("%s\n", newstr);

    return s1;
}

// Exercício 8 - Copia uma string para outra
char *mystrcpy (char s1[], const char s2[]) {
    int i;

    for(i = 0; s2[i]; i++)
        s1[i] = s2[i];

    s1[i] = '\0';

    return s1;
}

// Exercício 9 -
int mystrcmp(char s1[], char s2[]) {
    int i = 0, p, q;

    while(s1[i] == s2[i] && s1[i])
        i++;

    p = s1[i];
    q = s2[i];

    return p - q;
}

// Exercício 10 -

// Exercício 11 - Inverter uma string
void mystrrev(char s[]) {
    int i, j = strlen(s) - 1;
    char newstr[strlen(s)];

    for (i = 0; i < strlen(s); i++) {
        newstr[i] = s[j];
        j--;
    }

    newstr[i] = '\0';

    printf("%s\n", newstr);
}

// Exercício 12 - Retirar todas as vogais de uma string
void strnoV (char s[]) {
    int i = 0, j = 0;
    char newstr[strlen(s)];

    while (s[i]) {
        if (s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            i++;
        else {
            newstr[j] = s[i];
            i++;
            j++;
        }
    }

    newstr[j] = '\0';

    printf("%s\n", newstr);
}

// Exercício 13
void truncW (char t[], int n) {
    int i = 0,
        j = 0,
        contador = 0;

    for (i = 0; t[i]; i++) {
        if  (t[i] == " ") {
            contador = 0;
            t[j] = t[i];
            j++;
        } else {
            if (contador < n) {
                t[j] = t[i];
                j++;
                contador++;
            }
        }
    }
    t[j] = '\0';

    printf("%s\n", t);
}

// Exercício 14 - Conta o caracter mais frequente
char charMaisfreq (char s[]) {
    int i, j, count, maior = 0;
    char maisFreq = s[i];

    for (i = 0; s[i]; i++) {
        count = 1;
        for (j = 0; s[j]; j++) {
            if (s[i] == s[j])
                count++;
        }
        if (count > maior) {
            maior = count;
            maisFreq = s[i];
        }
    }
    printf("%c", maisFreq);

    return maisFreq;
}

// Exercício 15 - Conta a maior sequencia de caracteres iguais consecutivos
int iguaisConsecutivos (char s[]) {
    int i = 0, count = 1, maior = 0;

    while (s[i]) {
        while (s[i] == s[i + 1]){
            count++;
            i++;
        }
        if(count >= maior)
            maior = count;
        count = 1;
        i++;
    }
    return maior;
}

// Exercício 16 - Conta a maior sequencia de caracteres diferentes
int difConsecutivos (char s[]) {
    int i = 0, count = 1, maior = 0;

    while (s[i]) {
        count = 1;
        while (s[i] != s[i + 1]){
            count++;
            i++;
        }
        if(count > maior)
            maior = count;
        i++;
    }
    return maior;
}

// Exercício 17 - Calcula o comprimento do maior prefixo em comum entre duas strings
int maiorPrefixo (char s1[], char s2[]) {
    int i, count = 0;

    for(i=0; s1[i]; i++){
        if(s1[i] == s2[i])
            count++;
        else
            return count;
    }

    return count;
}

// Exercício 18 - Calcula o comprimento do maior sufixo em comum entre duas strings
int maiorSufixo (char s1[], char s2[]) {
    int i = strlen(s1) - 1,
        j = strlen(s2) - 1,
        count = 0;

    for (; i >= 0; i--, j--) {
        if (s1[i] == s2[j])
            count++;
        else
            return count;
    }
    return count;
}

// Exercício 19 - Calcula o tamanho do maior sufixo de s1 que é um prefixo de s2.
int sufPref(char s1[], char s2[]){
    int count = 0, j = 0, i;

    for(i = 0; s1[i]; i++){
        if(s1[i] == s2[j]){
            count++;
            j++;
        } else {
            count = 0;
            j = 0;
        }
    }
    return count;
}

// Exercício 20 - Conta as palavras de uma string
int contaPal(char s[]){
    int count = 0, i = 0;

    while(i<strlen(s)){
        if(!(isspace(s[i])) && s[i] != '\0'){
            count++;
            i++;
        }
        while(!(isspace(s[i]))){
            i++;
        }
        while(isspace(s[i])){
            i++;
        }
    }
    return count;
}

// Exercício 21 - Conta as vogais de uma string
int contaVogais (char s[]) {
    int i = 0, count = 0;

    while (s[i]) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            count++;
            i++;
    }
    return count;
}

// Exercício 22 - Testa se todos os caracteres da primeira string estão contidos na segunda
// FUNÇÃO AUXILIAR
int verificaSePertence (char x, char s[]){
    int i, r = 0;

    for(i=0; s[i]; i++){
        if(x == s[i])
            r = 1;
    }

    return r; // r = 1 se pertencer e r = 0 se NAO pertencer
}

int contida (char a[], char b[]) {
    int i = 0, r = 0;

    for(i=0; a[i]; i++){
        if (verificaSePertence (a[i],b) == 0){
            r = 0;
            break;
        } else
            r = 1;
    }

    return r;
}

// Exercício 23 - Testa se uma palavra é palíndrome
int palindrome (char s[]) {
    int i = 0,
        j = strlen(s) - 1,
        r = 1;

    while (i < strlen(s)/2) {
        if (s[i] != s[j]) {
            r = 0;
            break;
        } else {
            i++;
            j--;
        }
    }

    return r;
}

// Exercício 24 - Remove os caracteres que se repetem sucessivamente
// Constroi uma nova string (MANEIRA TESTADA NO MAIN)
int remRep1 (char x[]) {
    int i = 0, j = 0, count = 0;
    char newstr[strlen(x)];

    while (x[i]) {
        if (x[i] != x[i+1]) {
            newstr[j] = x[i];
            i++;
            j++;
            count++;
        } else
            i++;
    }

    newstr[j+1] = '\0';

    printf("%s\n", newstr);

    return count;
}

// Altera no array (100% dos testes no CODEBOARD)
int remRep(char s[]){
    int i, j;

    for(i=0; s[i]; i++){
        if(s[i] == s[i+1]){
            for(j=i+1; s[j]; j++)
                s[j] = s[j+1];
            i--;
        }
    }

    return i;
}

// Exercício 25 - Remove os espaços repetidos sucessivamente (TESTADA NO MAIN) (NAO FUNCIONA NO CODEBOARD)
int limpaEspacos (char s[]) {
    int i = 0, j = 0, comp = 0;
    char newstr[strlen(s)];

    while (s[i]) {
        if (s[i] == ' ' && s[i+1] == ' ') {
            i++;
        } else {
            newstr[j] = s[i];
            i++;
            j++;
        }
    }

    newstr[j+1] = '\0';
    comp = strlen(newstr);

    printf ("%s\n", newstr);

    return comp;
}




int main () {
    int opt, n, resultado;
    char s1[100], s2[100];

    printf("Introduza o numero da pergunta: ");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            one();
            break;

        case 2:
            two();
            break;

        case 3:
            three();
            break;

        case 4:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            resultado = bitsUm(n);
            printf("Resultado = %d\n", resultado);

            break;

        case 5:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            resultado = trailingZ(n);
            printf("Resultado = %d\n", resultado);

            break;

        case 6:
            printf("Introduza um numero: ");
            scanf("%d", &n);

            resultado = qDig(n);
            printf("Resultado = %d\n", resultado);

            break;

        case 7:
            printf("Introduza uma palavra: ");
            scanf("%s", &s1);

            printf("Introduza uma palavra: ");
            scanf("%s", &s2);

            mystrcat(s1, s2);

            break;

        case 8:
            printf("Introduza uma palavra: ");
            scanf("%s", &s1);

            printf("Introduza uma palavra: ");
            scanf("%s", &s2);

            mystrcpy(s1, s2);

            break;

        case 9:
            printf("Introduza uma palavra: ");
            scanf("%s", &s1);

            printf("Introduza uma palavra: ");
            scanf("%s", &s2);

            resultado = mystrcmp(s1, s2);

            printf("%d\n", resultado);

            break;

        case 10:
            // strstr("anatomia","ana");

            break;

        case 11:
            mystrrev("Banana Azul");

            break;

        case 12:
            strnoV ("Macaca");

            break;

        case 15:
            resultado = iguaisConsecutivos("aabcccac");

            printf("%d\n", resultado);

            break;

        case 16:
            resultado = difConsecutivos("aabcccac");

            printf("%d\n", resultado);

            break;

        case 24:
            resultado = remRep1("aaabaaabbbaaa");

            printf ("%d\n", resultado);

            break;

        case 25:
            resultado = limpaEspacos ("a  b    banana  azul   ");

            printf ("%d\n", resultado);

            break;

        default:
            printf("Questao Invalida!");
            break;
    }
    return 0;
}
