#include <stdio.h>

/*
 * Ler numeros inteiros
 *  aula 4
 */

int main(void) {

    int valor; // criei uma variavel para guardar um valor do tipo inteiro
    valor = 50;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("valor = %d\n", valor);

    return 0;
}
