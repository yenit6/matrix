#include <stdio.h>
#include <stdlib.h>

int main()
{

    float media[2];
    float nota[3][2];
    char name[3][200];
    int i, j;
    float soma = 0;

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome da materia: ");
        gets(name[i]);

        for (j = 0; j < 2; j++)
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
        printf("\nnome das materias: %s \n", name[i]);

        for (j = 0; j < 2; j++)
        {
            printf("notas: %.1f \n", nota[i][j]);
        }
        printf("media: %.2f\n", media[i]);

        if (media[i] > 7)
        {
            printf("aprovado");
        }
        else if (media[i] < 7 && media[i] >= 5)
        {
            printf("recuperacao");
        }
        else 
        {
            printf("reprovado");
        }
    }

    return 0;
}