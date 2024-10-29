#include <stdio.h>
char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a + 3, a + 2, a + 1, a}; //b é um array de ponteiros sendo b[0] = a[3]...
char ***c = b;//é um ponteiro para b
int main() {
  printf("%s ", **++c); //C agora aponta para b[1], e desferencia duas vezes, primeiro acessando b[1] e depois acessando o valor endereçado em b[1], neste caso a[2] = "Brito"
  printf("%s ", *--*++c + 3); // C tem aponta para b[1] inicialmente, incrementamos em c, agora apontando para b[2], logo desferenciamos, e apontamos para a[1], apos isso decrementamos de a[1], resultando em a[0] e acessando seu valor, neste caso "Agostinho", após isso, o ponteiro aponta para a primeira letra do nome "Agostinho" e ao avançarmos +3, ou seja, o terceiro elemento da string, e neste caso começaremos a imprimir a partir do s
  printf("%s ", *c[-2] + 3); //Da mesma forma, usando o C onde paramos, b[2], e ao fazer c[-2], acessamos o b[0], neste caso "Júnior" e avançamos 3 na string, neste caso, somente "IOR"
  printf("%s ", c[-1][-1] + 1); //C aponta aponta para b[2], -1 aponta para b[1][-1], b[1] é [a+2][-1] = a[1] = "Medeiros" e aos avançarmos +1 na string começamos por "edeiros"
  return 0;
}

//Saida: BRITO STINHO IOR EDEIROS 
