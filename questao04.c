
#include <stdio.h>
int main() {
    
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
      /* (a) */
      valor = 10;
      p1 = &valor;
      *p1 = 20;
      printf("%d \n", valor); //O programa funciona corretamente, pois o código pega o valor que está na variável "valor" e troca pelo número 20, através do ponteiro *p1 ,apos isso imprime a variave "valor.
      
      /* (b) */
      temp = 26.5;
      p2 = &temp;
      *p2 = 29.0;
      printf("%.1f \n", temp); // A saida esperada é 29.0, visto que temp é um variavel float, tornando p2 um ponteiro do tipo float, essa situação é parecida com a situação "a", só trocando o tipo da variavel, pois o código pega o valor que está na variável temp e troca pelo número 29.0, através do ponteiro *p2, após isso imprimir a variavel temp.
      
      /* (c) */
      p3 = &nome[0];
        aux= *p3;
      printf("%c \n", aux);// Saida esperada é "p", Pois o solicitado é o elemento de indice 0 da variavel do tipo com char, onde é anexado no ponteiro p3, que por sua vez é desreferenciado na variavel do tipo char aux e apos isso imprimido.
      
      /* (d) */
      p3 = &nome[4];
      aux= *p3;
      printf("%c \n", aux); // Saida esperada é "e", Pois o solicitado é o elemento de indice 4 da variavel do tipo com char, onde é anexado no ponteiro p3, que por sua vez é desreferenciado na variavel do tipo char aux e apos isso imprimido.
      
      
      /* (e) */
      p3 = nome;
      printf("%c \n", *p3);//Saida esperada é "P",  pois ao darmos a P3 o endereço de nome, apontaremos para o inicio da string nome, neste caso P
      
      /* (f) */
      p3 = p3+4;
        printf("%c \n", *p3); //De acordo com o codigo, sem analisar o fragamento isolado e sim como um todo, veremos que P3 tem o endereço da string nome anexado nele, assim aos fazermos p3+4 iremos para a posição 4 da string, neste caso "e"
      
      /* (g) */
      p3--;
      printf("%c \n", *p3); //Ao fazermos p3--, estamos retornando uma posição na string, ou seja 4-1 = 3, neste caso a saida será "t"
     
      /* (h) */
      vetor[0]= 31;  
      vetor[1]= 45;
      vetor[2]= 27;
      p4 = vetor;  idade = *p4;
      printf("%d \n", idade); //Irá imprimir 31, visto que p4 armazernará o endereço do array vetor e idade desreferencia o ponteiro p4 mostrando o valor do primeiro elemento do vetor, neste caso Vetor[0] = 31
      
      /* (i) */
      p5 = p4+1;  idade= *p5;
      printf("%d \n", idade); //Da mesma forma, irá imprimir 45, visto que p5 armazernará p4+1, ou seja o endereço do array vetor anexado em p4 avançando um posição e idade desreferencia o ponteiro p5 mostrando o valor do segundo elemento do vetor, neste caso Vetor[1] = 45
      
      /* (j) */
      p4 = p5+1;  idade= *p4;
      printf("%d \n", idade);//Aqui  irá imprimir 27, pois p4 avançará uma posição em relação a p5, neste caso Vetor[2]=27
      
      /* (l) */
      p4 = p4-2; idade = *p4;
      printf("%d \n", idade);//Aqui irá imprimir 31, pois p4 pegará o valor de p4 anterior e regridirá 2 posições na string, neste caso Vetor[0]=31
      
      /* (m) */
      p5 = &vetor[2]-1;
      printf("%d \n", *p5);//aqui impirá 45, pois p5 pegá o endereço de Vetor[2] e regridirá uma posição em relação ao endereço, assumindo o endereço da posição vetor[1], e apos imprimirá a desreferenciação do ponteiro p5, ou seja, desreferenciará o endereço do vetor[1] e mostrará seu valor, neste caso 45
     
      /* (n) */
      p5++;
      printf("%d \n", *p5); //Aqui p5 avançará um posição em relação a ultima vez que foi chamado, neste caso no trecho m, onde tinha o endereço vo vetor[1], assumindo o endereço de vetor[2] e depois desreferenciando p5 para imprimir o valor de vetor[2], neste caso 27  
  return(0);
  
}
