#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 167: Como criar tipos de dados em C com TYPEDEF STRUCT?
*/
typedef struct {
    int idade;
    char sexo;
    char nome[30];
}Pessoa;
struct pessoa {
    int idade;
    char sexo;
    char nome[30];
};
int main() {
    Pessoa pessoa1;
    struct pessoa pessoa2;

    pessoa1.idade = 20;
    pessoa1.sexo = 'M';
    strcpy(pessoa1.nome, "Joh");

    pessoa2.idade = 20;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Snow");

    printf("Pessoa 1\n Nome: %s\n Idade: %d\n Sexo: %c\n",pessoa1.nome,pessoa1.idade,pessoa1.sexo);
    printf("Pessoa 2\n Nome: %s\n Idade: %d\n Sexo: %c\n",pessoa2.nome,pessoa2.idade,pessoa2.sexo);

    return 0;
}