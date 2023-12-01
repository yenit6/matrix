#include <stdio.h>
#include <stdlib.h>

int main()
{

  struct dados_aluno
  {
    char nome[200];
    int idade;
  };

  struct dados_aluno aluno;

  printf("digite o nome do aluno: ");
  gets(aluno.nome);

  printf("idade do aluno: ");
  scanf("%d", &aluno.idade);

  printf("\nNome do aluno: %s\n", aluno.nome);
  printf("idade do aluno: %d", aluno.idade);

  return 0;
}