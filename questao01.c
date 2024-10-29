
#include <stdio.h>

int main()
{
    #include <stdio.h>

    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    
    
    if (p == &i){
        printf("Essa relação é verdadeira, pois o ponteiro p aponta para o endereço de i e o valor de retorno é %d\n", p==&i); //O valor de p é o endereço de i e ao compararmos p com o endereço da memoria que a variavel i está armazenada, que neste caso é 0x7fff8ece0cc0. Então a comparação é verdadeira sendo 1
    } else{
        printf("Não é verdadeiro");
    }
    
    
    printf("O resultado dessa subtração é %d, pois o *p vai acessar o valor armazando em si, neste caso %d, da mesma forma *q, %d. \n %d - %d = %d \n", *p - *q, *p, *q, *p, *q, *p - *q);
    
    printf("Mostra %d\n",  **&p);//**&p desreferencia duas vezes o endereço de p para obter seu valor armazando, neste caso 3 

    printf("3 - *p/(*q) + 7 = 3 - %d + 7 = %d ", *p/(*q), 3 - *p/(*q) + 7 ); // A divisão entre *p/*q é a divisão dos valores correspondentes aos endereços que estão em q e p, neste casp 3/5 e como estamos usando somente variaveis do tipo int e não float, a divisão fica 0.

}
