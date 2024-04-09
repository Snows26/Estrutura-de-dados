#include "fila.h"
#include <stdio.h>
#include <stdbool.h>

void init(fila *f)
{
    f->qntd = 0;
}

bool inserir(fila *f, int v)
{
    if (f->qntd > TAM_MAX)
    {
        return false;
    }
    f->itens[f->qntd++] = v;

    return true;
}

void remover(fila *f)
{
    if (f->qntd == 0)
    {
        printf("Não há oq remover");
    }
    else
    {

        printf("O valor %d foi removido", f->itens[0]);
        for (int i = 0; i < f->qntd; i++)
        {
            f->itens[i] = f->itens[i + 1];
        }

        f->qntd--;
    }
}

void imprimir(fila f)
{
    int i;
    for (i = 0; i < f.qntd; i++)
    {
        printf(" %d |", f.itens[i]);
    }
}
