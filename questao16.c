
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    
    aloha[2] = value; //Valido, pois value é um float e pode substituir o elemento 2 de aloha, que é um float tambem
    scanf("%f", &aloha); //Invalido, pois &aloha é um ponteiro para um array e %f espera um unico (ponteiro ) float, o mais indicado seria &aloha[0]
    aloha = "value";//Invalido, pois aloha é um array de float e value neste caso é do tipo char, incompativel
    printf("%f", aloha); //Invalido, essa não é a forma de imprimir um array: 
    /***
     *  for (int i=0, i < 10, i++){
         printf("Valor é %f\n", aloha[i]);
         
     }
     * Ou se, poderia somente imprimir um termo do array
     ***/
    coisas[4][4] = aloha[3]; //Valido, pois aloha pode substituir qualquer elemento de coisas
    coisas[5] = aloha;
    pf = value; //Invalido, ponteiros não podem ser definidos por valores e sim por endereços, neste caso seria &value
    pf = aloha; 

}
