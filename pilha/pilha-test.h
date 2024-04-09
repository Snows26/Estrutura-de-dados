#ifndef _PILHA_H_
#define _PILHA_H_
#include <stdbool.h>
#define MAX_TAM 10

typedef int tipo_dado;
typedef struct{
    tipo_dado itens[MAX_TAM];
    int top;
} pilha;

//Inicializa
void init(pilha * p);

bool inserir(pilha * p, tipo_dado v);

void remover(pilha * p);

void imprimir(pilha * p);
#endif
