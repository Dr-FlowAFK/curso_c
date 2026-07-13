#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 138: Procurando caracteres em uma String com as funções strchr e strrchr
    strchr  -> retorna a primeira ocorrência
    strrchr -> retorna a última ocorrência
*/

int main() {

    char palavra[50] = {"apenas"};
    char *letra;

    letra = strchr(palavra,'a');

    printf("\n Resultado: %c\n",*letra);
    printf("\n Resultado comfirmacao: %c\n",*(letra + 1));

    return 0;
}