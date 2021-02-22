#include <stdio.h>
#include <stdlib.h>

// Dados o número n de alunos de uma turma e suas notas no teste, determinar a maior e a menor nota. (Nota máxima = 100 e nota mínima = 0).

void main () {
    int n_Alunos, nota, i, notaMenor, notaMaior;

    printf("Quantos alunos tem a turma? ");
    scanf("%d", &n_Alunos);

    notaMaior = 0;
    notaMenor = 100;

    for(i = 1; i <= n_Alunos; i++){
        printf("Introduza a nota do aluno n%d: ", i);
        scanf("%d", &nota);

        if(nota > notaMaior){
            notaMaior = nota;
        }else{
            notaMaior = notaMaior;
        }

        if(nota < notaMenor){
            notaMenor = nota;
        }else{
            notaMenor = notaMenor;
        }
    }

    printf("A maior nota foi %d\n", notaMaior);
    printf("A menor nota foi %d\n", notaMenor);

    system("pause");
}
