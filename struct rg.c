#include <stdio.h>
#include <stdlib.h>

struct rg
{
  char nome[1000];
  char DataNasci[1000];
  char rg[1000];
  char cpf[1000];
};

int main()
{

  int i;

  struct rg A[2];

  for (i = 0; i < 2; i++)
  {
    printf("\n");
    fflush(stdin);

    printf("digite seu nome: ");
    gets(A[i].nome);

    printf("\n");
    fflush(stdin);

    printf("sua data de nascimento: ");
    gets(A[i].DataNasci);

    printf("\n");
    fflush(stdin);

    printf("digite seu rg: ");
    gets(A[i].rg);

    printf("\n");
    fflush(stdin);

    printf("digite seu cpf: ");
    gets(A[i].rg);
  }

  system("clear || cls");

  for (i = 0; i < 2; i++)
  {
    printf("\nnome: %s\n", A[i].nome);
    printf("data de nascimento: %s\n", A[i].DataNasci);
    printf("rg: %s\n", A[i].rg);
    printf("cpf: %s\n", A[i].cpf);
  }

  return 0;
}