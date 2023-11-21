#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota[4][2];
    char name[4][200];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        printf("digite o nome do aluno:");
        gets(name[i]);

        for (j = 0; j < 2; j++)
        {
            printf("digite a nota do aluno: ");
            scanf("%f", &nota[i][j]);
        }

        fflush(stdin);
    }

    for (i = 0; i < 4; i++)
    {
        printf("\nnome dos alunos: %s \n", name[i]);

        for (j = 0; j < 2; j++)
        {
            printf("notas: %.1f \n", nota[i][j]);
        }
    }

    return 0;
}