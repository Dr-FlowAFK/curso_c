#include <stdio.h>

/*
 * Ler numeros inteiros
 *  aula 4
 */

int main(void) {
/*
    int valor; // criei uma variavel para guardar um valor do tipo inteiro
    valor = 50;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("valor = %d\n", valor);

    return 0;
    */

    //tipo nome
    float numero = 3.1415;

    printf("%.4f\n", numero);

    float numero_ler;
    printf("\nDigite um numero real: ");
    scanf("%f", &numero_ler);

    printf("\n Numero lido: %.2f", numero_ler);

    return 0;
}
