#include <stdio.h>
#include <stdlib.h>

struct dados_aluno
{
    char nome[200];
    int idade;
    float notas[2];
    float media;
};

int main()
{

    int soma;
    int i, j;
    struct dados_aluno aluno[3];

    for (i = 0; i < 3; i++)
    {

        printf("digite o nome do aluno: ");
        gets(aluno[i].nome);

        printf("idade do aluno: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("digite sua nota: ");
            scanf("%f", &aluno[i].notas[j]);
            soma += aluno[i].notas[j];
            fflush(stdin);
        }
        aluno[i].media = soma / j;
        soma = 0;
        printf("\n");
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nNome do aluno: %s\n", aluno[i].nome);
        printf("idade do aluno: %d\n", aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("notas: %.1f\n", aluno[i].notas[j]);
        }
        printf("media: %.1f\n", aluno[i].media);
    }

    return 0;
}