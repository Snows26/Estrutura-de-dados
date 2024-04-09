#include <stdio.h>
#include "lista_test.h"

void inicializa(lista *lst){
    lst->qntd = 0;
}


bool inserir(lista * lst, int k, tipo_dado v){
   if(k > MAX_TAM || k < 0 || lst->qntd > MAX_TAM){
    return false;
   }
   if(k > lst->qntd){
        lst->itens[lst->qntd] = v;
        lst->qntd++;
       return true;
   }
   else{
       for(int i = lst->qntd; i >= k; i--){
            lst->itens[i] = lst->itens[i-1];
       }
       lst->itens[k] = v;
       lst->qntd++;
       return true;
   }

}


bool acessar(lista lst, int k, tipo_dado *ret){
    if(k > MAX_TAM || k < 0){
        return false;
    }
    else{
        *ret = lst.itens[k];
    }

    return true;
}


bool remover(lista * lst, int k){
   if(k >= MAX_TAM || k < 0){
    return false;
   }
   if(lst->qntd == 0){
    return false;
   }
    for(int i = k; i < lst->qntd - 1; i++){
           lst->itens[i] = lst->itens[i + 1];
    }

   lst->qntd--;
   return true;
}


//Imprimir
void imprimir(lista lst){
    printf("   Indice:  ");
    for(int i = 0; i <= lst.qntd - 1; i++){
        printf("%d | ", i);
    }
    printf("\n");
    printf("Sua lista: ");
//================================================
    for(int i = 0; i <= lst.qntd - 1; i++){
        int j = lst.itens[i];
        printf("%d | ", j);
    }
//-----------------------------------------
    printf("\n");
}

