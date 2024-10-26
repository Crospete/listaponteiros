
#include <stdio.h>

int main()
{

  int i=5, *p;
  p = &i;
  printf("%p, %p, %d, %d ,%d, %d\n", p, (p+1), *p+2, **&p, 3**p, **&p+4);
  
  /***
   * De acordo com o enunciado e visto que p armazena o endereço de i, p terá como saida 4094. 
   * Da mesma forma p+1: 4094 + 2 = 4096, visto que cada inteiro ocupa 2 bytes de tamanho.
   * Para *p+2, a saida vai ser 7 pois *p desreferencia p, que armazena o endereço de i, mostrando o valor de i, neste caso 5, e depois somando + 2
   * Para **&p, &p dá o endereço de p, e *(&p) dá o valor armazenado em p, que é o endereço de i. O segundo * retorna o valor de i, que é 5. O valor impresso será 5.
   * Para 3**p, é uma multiplicação entre *p e 3, pois primeiro desreferencia p e depois multiplica por 3 saindo 15
   * Para **&p+4 , &p dá o endereço de p, e *(&p) dá o valor armazenado em p, que é o endereço de i. O segundo * retorna o valor de i, que é 5. O valor impresso será 5 e que depois soma com 4.
   ***/
 

}