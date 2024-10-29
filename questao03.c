
#include <stdio.h>

int main()
{
    p = &i; //Correto
    *q = &j; //Incorreto, pois *q é um valor int, neste caso o valor da variavel int j, e está entando armazenar um variavel do tipo ponteiro para inteiro
    p = &*&i;// Correto
    i = (*&)j;//Incorreto, isso dá erro de sintaxe em c, o correto seria
    i = *&j; //Correto
    i = *&*&j;//Correto
    q = *p;//Incorreto, pois *p retorna o valor de i, neste caso um int, e q é um ponteiro para int, assim dá incompatibilidade de variaveis(?) erro.
    i = (*p)++ + *q;//Correto
}
