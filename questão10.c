#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
    printf("%d\n", *(vet+i)); //Esse codigo imprime os valores de cada elemento de vet, atraves da desreferenciação do endereço. além disso ele avança pelos endereços atraves do indice i, e só depois disso acessa o valor
  }
  for(i=0;i<3;i++){
      printf("%X\n",vet+i); //Aqui imprimimos o endereço em hexadecimal dos elementos de vet, podemos ver que em hexadecimal as variaveis do tipo int são de 4bytes, pois C+4 = 10. Obs: Está dando uma pequena incompatibilidade de variaveis. 
    }
}

