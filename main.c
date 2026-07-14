#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 147:  Procedimento para imprimir uma string caracter por caracter 
*/

int minha_strlem(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}

void imprimir_string(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i++]);
    }
    printf("\n");
}

int main() {
    char vet[20] = {"Ola"};
    printf("%d\n", strlen(vet));
    printf("%d\n", minha_strlem(vet));
    imprimir_string(vet);
    return 0;
}