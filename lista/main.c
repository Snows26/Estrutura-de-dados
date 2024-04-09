#include <stdio.h>
#include "lista_test.h"
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	lista l;		// Declara��o da lista
	inicializa(&l); // Inicializa��o da lista
	int op, ac, k, valor;

	while (1)
	{
		printf("\n OPERA��ES \n 1.ACESSAR VALOR \n 2.INSERIR VALOR \n 3.REMOVER VALOR \n 4.IMPRIMIR \n 5.FECHAR \n");
		scanf("%d", &op);

		switch (op)
		{
		case 1:
			printf("Qual posi��o voc� quer acessar?");
			scanf("%d", &ac);
			tipo_dado dado_aluno;
			acessar(l, ac, &dado_aluno);
			printf("O valor na posi��o � %d", dado_aluno);
			break;
		case 2:
			printf("Qual posi��o voc� quer inserir?");
			scanf("%d", &k);
			printf("Qual valor voc� quer inserir?");
			scanf("%d", &valor);
			inserir(&l, k, valor);
			break;
		case 3:
			printf("Qual posi��o voc� quer remover?");
			scanf("%d", &k);
			remover(&l, k);
			break;
		case 4:
			imprimir(l);
			break;
		case 5:
			return 0;
			break;
		default:
			printf("DIGITE CERTO");
		}
	}
	return 0;
}

/// 0 1 2
/// a c e
