#include <stdio.h>
#include <stdlib.h>

int main()
{

    float media[3];
    float nota[3][3];
    char name[3][200];
    int i, j;
    float soma = 0;

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome do aluno:");
        gets(name[i]);

        for (j = 0; j < 3; j++)
        {
            printf("digite a nota do aluno: ");
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }

        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nnome dos alunos: %s \n", name[i]);

        for (j = 0; j < 3; j++)
        {
            printf("notas: %.1f \n", nota[i][j]);
        }
        printf("media: %.1f\n", media[i]);
    }

    return 0;
}