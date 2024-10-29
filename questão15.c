
#include <stdio.h>
int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}};
  printf("%p, %p, %p", x+3, *(x+3), *(x+2)+3);
}
/***
 * x+3 - Aponta para o endereço da quarta linha da matriz (x[3][0])
 * *(x+3) - Quando estamos numa matriz bidimensional em C, entende que queremos o endereço da linha e não o valor, isso acontece porque x + 3 é interpretado como um ponteiro para uma linha, e ao desreferenciar, obtemos um ponteiro para o início dessa linha.Neste caso, veremos o endereço de x[3][0]]
 * *(x+2)+3) - *(x+2) desreferencia a terceira linha da matriz, e depois avançamos +3 na memória, contudo não existe a quarta coluna, e deste modo o ponteiro é levado para o valor correspodente na linha abaixo. Neste caso, veremos o endereço x[3][0]
 * 
 * Assim, a saida esperada é o endereço da linha x[3] em todos os tres resultados.
 * 
 ***/