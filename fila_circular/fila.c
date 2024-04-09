#include "fila.h"
#include <stdio.h>
#include <stdbool.h>

void init(fila *f)
{
    f->qntd = 0;
    f->fim = 0;
    f->inicio = 1;
}

bool inserir(fila *f, int v)
{
    if (f->qntd >= TAM_MAX)
    {
        return false;
    }
    if (f->fim == TAM_MAX)
    {

        f->itens[0] = v;
        f->fim = 1;
        f->qntd++;

        return true;
    }
    else
    {
        f->itens[f->fim++] = v;
        f->qntd++;

        return true;
    }
}

void remover(fila *f)
{
    if (f->qntd == 0)
    {
        printf("Não há oq remover");
    }
    if (f->inicio == TAM_MAX)
    {

        printf("O valor %d foi removido", f->itens[f->inicio - 1]);
        f->inicio = 1;
        f->qntd--;
    }
    else
    {

        printf("O valor %d foi removido", f->itens[f->inicio - 1]);
        f->qntd--;
        f->inicio++;
    }
}

void imprimirmemo(fila f)
{
    int i;
    for (i = 0; i < TAM_MAX; i++)
    {
        printf(" %d |", f.itens[i]);
    }
}
