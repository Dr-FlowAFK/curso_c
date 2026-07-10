#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 137: Como copiar uma string em C com a função strcpy()?
*/

int main() {

    char palavras[50] = {"apenas"};
    char palavras2[20] = {" palavras teste"};
    //strcat(palavras,palavras2);
    strcpy(palavras,palavras2);
    printf("\n Resultado: %s\n",palavras);

    return 0;
}