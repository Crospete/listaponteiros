#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
  str++;
}

int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
  //O resultado não saiu como planejado por que o que foi dado a funçao foi só a copia do endereço de str e a funcao só moveu a copia do ponteiro str de posição, assim a funcao não alterou em nada no codigo
  /*** O que poderia ser feito:
        
        int main(){
          char *str = (void *)malloc(50*sizeof(char));
          strcpy(str, "Agostinho");
          puts(str+1);
          free(str);
          return 0;
   * Imprimirá somente str[1] para frente
   * ***/
}