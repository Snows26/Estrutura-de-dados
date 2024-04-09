#ifndef _LISTA_H
#define _LISTA_H
#define MAX_TAM 10
#include <stdio.h>
#include <stdbool.h>

typedef int tipo_dado;
typedef struct{
    tipo_dado itens[MAX_TAM];
    int qntd;
}lista;


void inicializa(lista *);
bool acessar(lista l, int, tipo_dado *);
bool inserir(lista *, int, tipo_dado);
bool remover(lista *, int);
void imprimir(lista l);


#endif //_LISTA_H

