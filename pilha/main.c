#include "pilha-test.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    pilha p;
    init(&p);

    int op, ac, v;

    while(1){
        printf("\n OPERAÇÕES: \n 1. INSERIR VALOR \n 2. REMOVER VALOR \n 3. IMPRIMIR VALOR \n 4. FECHAR \n");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("Qual valor deseja inserir: ");
            scanf("%d", &v);
            inserir(&p, v);
            break;
        case 2:
            remover(&p);
            break;
        case 3:
            imprimir(&p);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Digite um valor valido");
        }
    }
return 0;
}

