#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[2][2];
    int i, j;

    printf("digite os elementos para matriz: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("elemento da linha %d coluna %d: ", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
    }

    system("clear||cls");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("elemento da linha %d coluna %d: %d\n", i + 1, j + i, numeros[i][j]);
        }
    }

    return 0;
}