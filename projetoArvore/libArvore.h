#ifndef LIBARVORE_H_INCLUDED
#define LIBARVORE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct arv Arv;
struct arv{
    char info;
    Arv* left;
    Arv* right;
};

Arv* inicia(void);
Arv* criaArvore(char c, Arv* al, Arv* ar);
int vazio(Arv* a);
void imprime (Arv* a);
void imprimeCascata(Arv* a);
void liberaArvore(Arv* a);
#endif // LIBARVORE_H_INCLUDED
