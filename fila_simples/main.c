#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    fila f;
    init(&f);

    int op, res;

    while (1)
    {

        printf("\n OPERAÇÕES: \n 1.INSERIR \n 2.REMOVER \n 3.IMPRIMIR \n 4.FECHAR \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Digite o valor que deseja inserir: ");
            scanf("%d", &res);
            inserir(&f, res);
            break;
        case 2:
            remover(&f);
            break;
        case 3:
            imprimir(f);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Digite certo!!");
        }
    }

    return 0;
}
