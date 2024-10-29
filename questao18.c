#include <stdio.h>
   int numero(int numero_Avenida, int numero_Travessa){
       return numero_Avenida*numero_Travessa - 1;
   }

int main(){
   int (*ponteiro_Funcao)(int, int); //Declarando o ponteiro para funçaõ e seus argumentos
   
   ponteiro_Funcao = numero; //Atribuindo a função numero ao ponteiro
   printf("Minha da minha casa com base nas ruas tem o número %d\n", ponteiro_Funcao(7, 5)); //Chamando a funcao numero
   printf("O endereço dessa casa em C é %p e é igual ao endereço de numero_Rua %p", *ponteiro_Funcao, numero); //Comprovando que os endereços de ponteiro_Funcao e numero são o mesmo, e que ponteiro_Funcao aponta para numero
    
}
/***
 * Em C, Um ponteiro para função é uma variável que armazena o endereço de uma função, permitindo que você a chame indiretamente.Fonte : https://www.ibm.com/docs/pt-br/i/7.5?topic=functions-pointers
 * Código: Determinar o número de um casa atraves da quantidade de avenidas e travessas que foram passadas.
 * 
 * 
 * 
 ***/
