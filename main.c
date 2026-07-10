#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 134: Descobrindo o tamanho de uma String com a função strlen()
*/

int main() {

    char palavras[13] = {"apenas teste"};
    printf("%s\n", palavras);

    printf("tamanho de palavras: %d\n", strlen(palavras));
    printf("\n");


    return 0;
}
