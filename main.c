#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 173: Como criar uma função que retorna uma struct?
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

void imprimir_pessoa(Pessoa pessoa) {
    printf("Nome: %s \n",pessoa.nome);
    printf("Sexo: %c\n",pessoa.sexo);
    printf("Data de nascimento: %d/%d/%d \n",pessoa.data_nascimento.dia,pessoa.data_nascimento.mes
        ,pessoa.data_nascimento.ano);
    printf("Idade: %d",pessoa.idade);
}

Pessoa get_pessoa() {
    Pessoa pessoa;
    printf("Digite seu nome: \n");
    fgets(pessoa.nome,30,stdin);

    printf("Digite sua idade: \n");
    scanf("%d",&pessoa.idade);
    scanf("%c");

    printf("Digite seu sexo (f, f, M, m) : \n");
    scanf("%c",&pessoa.sexo);

    printf("Digite sua data de nascimento no formato (dd mm aaaa): \n");
    scanf("%d%d%d",&pessoa.data_nascimento.dia,&pessoa.data_nascimento.mes,&pessoa.data_nascimento.ano);
    return pessoa;
}

int main() {
    Pessoa pessoa1;
    struct pessoa pessoa2;

    pessoa2.idade = 20;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Snow");

    imprimir_pessoa(pessoa2);
    pessoa1 = get_pessoa();
    imprimir_pessoa(pessoa1);

    return 0;
}