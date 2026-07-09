#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 129: Lendo uma String com a função scanf()
    scanf("%80[^\n]", str);
*/

int main() {

    char palavras[10];
    printf("%s\n", palavras);

    printf("Digite seu nome: ");
    scanf("%10[^\n]",palavras);

    printf("%s\n", palavras);

    return 0;
}
