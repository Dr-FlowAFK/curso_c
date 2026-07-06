#include <stdio.h>

/*
 * Ler varios valores
 *  aula 10
 */

int main(void) {
    int numero_1, numero_2, numero_3;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &numero_1, &numero_2, &numero_3);
    printf("O numero eh %d", numero_1);
    printf("O numero eh %d", numero_2);
    printf("O numero eh %d", numero_3);
    return 0;
}
