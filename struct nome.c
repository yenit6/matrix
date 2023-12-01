#include <stdio.h>
#include <stdlib.h>

int main()
{

  struct dados
  {
    char nome[400];
    int idade;
    float peso;
    float altura;
  };

  struct dados P;

  printf("digite seu nome: ");
  gets(P.nome);

  printf("digite sua idade: ");
  scanf("%d", &P.idade);

  printf("digite seu peso: ");
  scanf("%f", &P.peso);

  printf("digite sua altura: ");
  scanf("%f", &P.altura);

  printf("nome: %s\n", P.nome);
  printf("idade: %d\n", P.idade);
  printf("peso: %.1f\n", P.peso);
  printf("altura: %.2f\n", P.altura);

  return 0;
}