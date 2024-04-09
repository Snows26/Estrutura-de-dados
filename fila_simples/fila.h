#ifndef _FILA_H_
#define _FILA_H_
#include <stdio.h>
#include <stdbool.h>

#define TAM_MAX 10

typedef int t_dado;

typedef struct
{
    t_dado itens[TAM_MAX];
    int qntd;
} fila;

void init(fila *);

bool inserir(fila *, int v);

void remover(fila *);

void imprimir(fila f);

#endif //_FILA_H_
