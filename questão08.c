#include <stdio.h>

int main(){//Exemplo usando a questão anterior
    
  float pulo[8] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
  printf("%.1f, %.1f, %p, %p",  *(pulo + 2), *(pulo + 4), pulo + 4, pulo + 2);

  
}
/***
 *  *(p+2) é o correto visto que ele faz um ponteiro apontar para o terceiro valor e depois desreferencia esse ponteiro acessando o valor dele, neste caso o terceiro elemento
 *  *(p+4) acessa o quinto valor, errado
 *  p+4 e p+2 são somente ponteiro que apontam para o elemento, mas não acessam seus valores
 * ***/