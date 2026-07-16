#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 169: Posso usar uma STRUCT dentro de outra STRUCT?
*/
typedef struct nascimento {
    int dia, mes, ano;
}Nascimento;

typedef struct pessoa{
    Nascimento data_nascimento;
    int idade;
    char sexo;
    char nome[30];
}Pessoa;

int main() {
    Pessoa pessoa1;
    struct pessoa pessoa2;

    printf("Digite seu nome: \n");
    fgets(pessoa1.nome,30,stdin);

    printf("Digite sua idade: \n");
    scanf("%d",&pessoa1.idade);
    scanf("%c");

    printf("Digite seu sexo (f, f, M, m) : \n");
    scanf("%c",&pessoa1.sexo);
    printf("Digite sua data de nascimento no formato (dd mm aaaa): \n");
    scanf("%d%d%d",&pessoa1.data_nascimento.dia,&pessoa1.data_nascimento.mes,&pessoa1.data_nascimento.ano);



    pessoa2.idade = 20;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Snow");

    printf("Pessoa 1\n Nome: %s\n Idade: %d\n Sexo: %c\n",pessoa1.nome,pessoa1.idade,pessoa1.sexo);
    printf(" Data de nascimento: %d/%d/%d \n",pessoa1.data_nascimento.dia,pessoa1.data_nascimento.mes,
        pessoa1.data_nascimento.ano);
    printf("Pessoa 2\n Nome: %s\n Idade: %d\n Sexo: %c\n",pessoa2.nome,pessoa2.idade,pessoa2.sexo);


    return 0;
}