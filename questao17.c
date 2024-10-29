
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int)); // Alocação da memoria dinamica
    *ptr = 42; //usando a memoria
    return 0; //Vazamento
}

//Ocorre quando o código aloca memória dinâmica, mas não libera essa memória após o uso, resultando em uma quantidade de memória que fica "perdida" e não pode ser reutilizada.
/***
 * 
    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        int *ptr = (int *)malloc(sizeof(int)); // Alocação da memoria dinamica
        *ptr = 42; //usando a memoria
        free(ptr); //Liberação da memoria
        return 0; //Vazamento
    }
 * 
 ***/
