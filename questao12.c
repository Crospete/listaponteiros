#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}
/***
 * Saída deveria ser 4, mas dá um erro de iniciação. A seguir alguns erros:
 * Primeiro - ponteiros para int apontam para endereços de int e não valores de int, neste caso *x não poderia apontar para 3 diretamente
 * Segundo - Constante não podem ser mudadas seus valores durante a execução do código
 * 
 ***/
 
