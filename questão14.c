#include <stdio.h>
int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1;
  c = **ppc; //pc acessa b que contem o endereço de c e depois acessa o valor de c, obtendo 5 e depois incrementando mais 1, ou seja, c é 6
  *pb += 2;
  b = *pb; //pb que aponta para o endereço de c, mas agora, dentro da função c é 6, e  incrementando mais 2 fica 8
  a += 3; // a é incrementado mais 3, resultando em 8
  printf("%d,%d e %d\n", a,  b , c); //printf das variaveis locais, resultando em 8,8 e 6
  return a + b + c; // retorno da soma
}
void main() {
  int c, *b, **a;
  c = 5;
  b = &c;
  a = &b;
  printf("%d\n", f(c, b, a)); //Copia dos valores de c,b,a
  getchar();
}
/***
 * A saída do programa tá saindo 22, e não 19
 * 
 * 
 ***/