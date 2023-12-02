#include <stdio.h>
#include <stdlib.h>

#define a 3
#define b 2
#define c 2

struct dados
{
    int Turma;
    char nome[200];
    int idade;
    float notas[2];
    float media;
};

struct dadosProf
{
    char nome[200];
    char diciplina[2][200];
    int turmas[2];
};

int main()
{
    int soma;
    struct dadosProf p[c];
    struct dados l[a];
    int i, j;

    printf("dados do aluno\n");
    for (i = 0; i < a; i++)
    {
        printf("numero da turma do %d aluno: ", i + 1);
        scanf("%d", &l[i].Turma);

        fflush(stdin);

        printf("digite o nome do %d aluno: ", i + 1);
        gets(l[i].nome);

        printf("idade do %d aluno: ", i + 1);
        scanf("%d", &l[i].idade);

        for (j = 0; j < b; j++)
        {
            printf("digite sua nota: ");
            scanf("%f", &l[i].notas[j]);
            soma += l[i].notas[j];
            fflush(stdin);
        }
        l[i].media = soma / j;
        soma = 0;
        printf("\n");
        fflush(stdin);
    }

    printf("\ndados do professor\n");
    for (i = 0; i < c; i++)
    {
        printf("nome do %d professor: ", i + 1);
        gets(p[i].nome);

        for (j = 0; j < b; j++)
        {
            printf("%d diciplina do %d professor: ", i + 1, i + 1);
            gets(p[i].diciplina[j]);
        }

        for (j = 0; j < b; j++)
        {
            printf("turmas do %d professor: ", i + 1);
            scanf("%d", &p[i].turmas[j]);
        }
        fflush(stdin);
    }

system("clear || cls")

    printf("\nexibindo dados do aluno\n");
    for (i = 0; i < a; i++)
    {
        printf("turma do %d aluno: %d\n", i + 1, l[i].Turma);
        printf("nome do %d aluno: %s\n", i + 1, l[i].nome);
        printf("idade do %d aluno: %d\n", i + 1, l[i].idade);
        for (j = 0; j < b; j++)
        {
            printf("notas do %d aluno: %.1f\n", i + 1, l[i].notas[j]);
        }
        printf("media: %.1f\n", l[i].media);
        if (l[i].media >= 7.0)
        {
            printf("\naprovado\n");
        }
        else
        {
            printf("\nreprovado\n");
        }
    }

    printf("\nexibindo dados do professor\n");
    for (i = 0; i < c; i++)
    {
        printf("nome do %d professor: %s\n", i + 1, p[i].nome);
        for (j = 0; j < b; j++)
        {
            printf("diciplinas do %d professor: %s\n", i + 1, p[i].diciplina[j]);
        }
        for (j = 0; j < b; j++)
        {
            printf("turmas do %d professor: %d\n", i + 1, p[i].turmas[j]);
        }
    }

    return 0;
}