#include <stdio.h>
void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1];
  printf("%s\n", t);
}
int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  funcao(a);
  return 0;
}

/*** 
 * Saida resultante é gh, pois na  linha 9 a funcao recebe um parametro p para a, onde p aponta para a, neste caso aponta para a[0],
 dentro de funcao p é incrementado com o tamanho de um int de 4bytes, assumindo um valor de p[4], porém apos isso é feito um decremento de -1, assim
 p[3] e como p aponta para a, então a[3], neste caso o elemento de indice 3 do ponteiro a, gh***/

