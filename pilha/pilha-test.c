#include "pilha-test.h"

void init(pilha * p){
    p->top = 0;
}

bool inserir(pilha * p, tipo_dado v){
    if(p->top == MAX_TAM){
        return false;
    }
    p->itens[p->top++] = v;

    return true;
}

void remover(pilha * p){
    if (p->top == 0) {
        return;
    }
       printf("O valor removido foi: %d\n", p->itens[--(p->top)]);;
}

void imprimir(pilha * p){

    for(int i=0; i < p->top; i++){
        printf(" %d |", p->itens[i]);
    }
    return true;
}



