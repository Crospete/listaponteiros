#include <stdio.h>

int main(void){
    
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  
  for(i = 0 ; i <= 4 ; i++){
      printf("i = %d",i);
      printf(" vet[%d] = %.1f",i, vet[i]);
      printf(" *(f + %d) = %.1f",i, *(f+i));
      printf(" &vet[%d] = %p",i, &vet[i]);
      printf(" (f + %d) = %p",i, f+i);
      printf("\n");
  }
}
/***
 *  O resultado  de :
 *  printf(" vet[%d] = %.1f",i, vet[i]);
 *  printf(" *(f + %d) = %.1f",i, *(f+i));
 * É imprimir o valor do vet correspondente ao indice dado por i, sendo desreferenciando a soma do ponteiro f com o indice i, seja mostrando o valor de vet[i] diretamente.
 * 
 * A segunda parte: 
 *  printf(" &vet[%d] = %p",i, &vet[i]);
 *  printf(" (f + %d) = %p",i, f+i);
 * Nesta segunda para imprime os endereços de vet e do ponteiro f, sendo de acordo com o indice vai deslocando o ponteiro.
 * Em resumo, esse código gera uma tabela com os valores armazenados no vetor e os respectivos endereços de memória de cada elemento.
 * 
 * OBS: Troquei %X por %p pois estava havendo uma incompatibilidade de variaveis, pois %X é recomendavel para mostrar em hexadecimal valores int, e neste caso era um float, sendo portanto incompativel, assim coloquei %p para imprimir o valor do ponteiro.
 * ***/