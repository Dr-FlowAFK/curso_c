#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 172: Como passar uma struct como parâmetro para um procedimento?
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
    printf("Idade: ",pessoa.idade);
}

int main() {
    Pessoa pessoa1;
    struct pessoa pessoa2;

    pessoa2.idade = 20;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Snow");

    imprimir_pessoa(pessoa2);

    printf("Digite seu nome: \n");
    fgets(pessoa1.nome,30,stdin);

    printf("Digite sua idade: \n");
    scanf("%d",&pessoa1.idade);
    scanf("%c");

    printf("Digite seu sexo (f, f, M, m) : \n");
    scanf("%c",&pessoa1.sexo);
    printf("Digite sua data de nascimento no formato (dd mm aaaa): \n");
    scanf("%d%d%d",&pessoa1.data_nascimento.dia,&pessoa1.data_nascimento.mes,&pessoa1.data_nascimento.ano);






    return 0;
}