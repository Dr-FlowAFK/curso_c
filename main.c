#include <stdio.h>

/*
 * Ler dois caracteres
 *  aula 12
 */

int main(void) {
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a,&b);// espaço entre os %c -> comando para o computador desconsiderar o ENTER, TAB e o ESPAÇO
    //buffer => f\nf
    printf("caracter um: %c caracter dois: %c", a, b);
    return 0;
}
