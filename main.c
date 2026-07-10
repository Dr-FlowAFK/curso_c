#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 133: Como descobrir o tamanho de uma String?
*/

int main() {
    int i,tam = 0;
    char palavras[13] = {"apenas teste"};
    printf("%s\n", palavras);

    i = 0;
    while (palavras[i] != '\0') {
        //printf("%c", palavras[i++]);
        tam++;
        i++;
    }

    printf("tamanho de palavras: %d\n", tam);
    printf("\n");


    return 0;
}
