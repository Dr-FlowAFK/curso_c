#include <stdio.h>

/*
 * Ler dois caracteres
 *  aula 14
 */

int main(void) {
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);// espaço entre os %c -> comando para o computador desconsiderar o ENTER, TAB e o ESPAÇO
    //buffer => f\nf

    printf("Digite outra letra: ");
    scanf(" %c", &b);
    printf("caracter um: %c caracter dois: %c", a, b);
    return 0;
}
