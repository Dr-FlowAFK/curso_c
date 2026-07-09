#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 130: Lendo uma String com a função gets()
*/

int main() {

    char palavras[10];
    printf("%s\n", palavras);

    printf("Digite seu nome: ");
    //scanf("%10[^\n]",palavras);
    gets(palavras);

    printf("%s\n", palavras);

    return 0;
}
