#include <stdio.h>
#include <stdlib.h>

struct dados
{
    char nome[200];
    char DataDeEntrada[200];
    char DataNasci[200];
    char endereco[200];
    char matricula[200];
};

int main()
{

#define a 2

    struct dados f[a];
    struct dados c[a];
    int i;



printf("dados do funcionario: \n");
    for (i = 0; i < a; i++)
    {
        printf("\n");
        printf("digite o nome do %d funcionario: ", i + 1);
        gets(f[i].nome);
        printf("digite a data de adimicao do %d funcionario: ", i + 1);
        gets(f[i].DataDeEntrada);
        printf("digite a matricula do %d funcionario: ", i + 1);
        gets(f[i].matricula);
        printf("digite o endereco do %d funcionario: ", i + 1);
        gets(f[i].endereco);
       // fflush(stdin);
    }

printf("dados do cliente: \n");
    for (i = 0; i < a; i++)
    {
        printf("\n");
        printf("digite o nome do %d cliente: ", i + 1);
        gets(c[i].nome);

        printf("digite a data de nascimento do %d cliente: ", i + 1);
        gets(c[i].DataNasci);

        printf("digite o endereco do %d funcionario: ", i + 1);
        gets(c[i].endereco);
    }

    system("clear || cls");

    printf("\ndados de funcionario\n");
    for (i = 0; i < a; i++)
    {
        printf("\n");
        printf("nome do %d funcionario: %s\n", i + 1, f[i].nome);
        printf("data de entrada do %d primeiro funcionario: %s\n", i + 1, f[i].DataDeEntrada);
        printf("matricula do %d funcionario: %s\n", i + 1, f[i].matricula);
        printf("endereco do %d funcionario: %s\n", i + 1, f[i].endereco);
    }

    printf("\ndados de cliente\n");
    for (i = 0; i < a; i++)
    {
        printf("\n");
        printf("nome do %d cliente: %s\n", i + 1, c[i].nome);
        printf("data de nascimento do %d cliente: %s\n", i + 1, c[i].DataNasci);
        printf("endereco do %d cliente: %s\n", i + 1, c[i].endereco);
    }

    return 0;
}