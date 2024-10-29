#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct teste {
    int x;
    char nome[20];
};

int main() {
    struct teste *s = (struct teste *)malloc(sizeof(struct teste));  //Alocando memoria para o ponteiro s
    s->x = 3;  //Definindo x como 3, e s apontando para ele
    strcpy(s->nome, "jose"); //Copiando a string jose para o array de char

    printf("%d\n", s->x);
    printf("%s\n", s->nome);

    free(s); //Liberando memoria do ponteiro
    return 0;
}
/***
 * Primeiro erro encontrado, em C, na inicialização de um struct não pode haver atribuições, pois o struct é somente uma definição de dados.
 * Segundo erro, a função main retorna um inteiro, neste caso deveria ser int mais(){}
 * Terceiro erro, o ponteiro s foi declarado para armazanar memoria, mas de inicio não aponta para nenhum endereço ou defini espaço na memoria para ele. Assim , podemos dizer que o ponteiro está solto e não aponta para nada na memoria.
 * #include <stdio.h>
    struct teste{
      int x = 3;
      char nome[] = "jose";
    };
    main(){
      struct teste *s;
      printf("%d", s->x);
      printf("%s", s->nome);
    }
 * 
 ***/