#include <stdio.h>

int main(){
    
    int mat[4], *p, x;

        p = mat + 1; //Valido pois p aponta agora para o mat[1]
        p = mat++; //Invalido resulta num erro de copilação, pois não é possivel incrementar o nome de um array
        p = ++mat; //Invalido pelo mesmo motivo do anterior
        x = (*mat); //Valido pois x irá acessar o valor do primeiro elemento de mat, mat[0]

  
}
