#include <stdio.h>
#include <stdlib.h>

int main()
{

  struct dados
  {
    char nome[400];
    int idade;
    char endereco[4000];
  };

  struct dados P;

  printf("digite seu nome: ");
  gets(P.nome);

  printf("digite sua idade: ");
  scanf("%d", &P.idade);

  fflush (stdin);

  printf("digite seu endereco: ");
  gets(P.endereco);

  printf("nome: %s\n", P.nome);
  printf("idade: %d\n", P.idade);
  printf("endereco: %s\n", P.endereco);

  return 0;
}