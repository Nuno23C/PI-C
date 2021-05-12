#include <stdio.h>
#include <stdlib.h>

#define Max 10


// Exercício 1
typedef struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;


// a)
void SinitStack (SStack s) {
    s->sp = 0;
}

// b)
int SisEmpty (SStack s) {
    return s->sp == 0;
}

// c)
int Spush (SStack s, int x) {
    if (s->sp == Max)
        return 1;
    s->values[s->sp++] = x;
    return 0;
}

// d)
int Spop (SStack s, int *x) {
    if (s->sp == 0)
        return 1;
    *x = s->values[s->sp--];
    return 0;
}

// e)
int Stop (SStack s, int *x) {
    if (s->sp == Max)
        return 1;
    *x = s->values[s->sp];
    return 0;
}


// Exercício 2
typedef struct staticQueue {
    int front;
    int lenght;
    int values [Max];
} QUEUE, *SQueue;

// a)
void SinitQueue (SQueue q) {
    q->front = 0;
    q->lenght = 0;
}

 // b)
 int SisEmptyQ (SQueue q) {
     return q->lenght == 0;
 }

// c)
int Senqueue (SQueue q, int x) {
    if (q->front + q->lenght == Max)
        return 1;
    q->values[q->lenght+q->front] = x;
    return 0;
}

// d)
int Sdequeue (SQueue q, int *x) {
    if (q->lenght == 0)
        return 1;
    *x = q->values[q->front++];
    return 0;
}

// e)
int Sfront (SQueue q, int *x) {
    if (q->lenght == 0)
        return 1;
    *x = q->values[q->front];
    return 0;
}

// Exercício 3

// STACK

typedef struct dinStack {
    int size; // guarda o tamanho do array values
    int sp;
    int *values;
} *DStack;

void SinitStack2 (DStack s) {
    s->sp = 0;
    s->size = 32;
    s->values = malloc (sizeof (s->size));
}

void Spush2 (DStack s, int x) {
    if (s->sp == s->size) {
        s->size *= 2;
        s->values = realloc (s->values, s->size);
    }
    s->values[s->sp++] = x;
}

// QUEUE

typedef struct dinQueue {
    int size; // guarda o tamanho do array values
    int front;
    int length;
    int *values;
} *DQueue;

void SinitQueue (DQueue q) {
    q->length = 0;
    q->size = 32;
    q->front = 0;
    q->values = malloc (sizeof (q->size));
}
