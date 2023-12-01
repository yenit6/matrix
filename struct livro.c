#include <stdio.h>
#include <stdlib.h>

struct livro
{
  char nome[400];
  char autor[400];
  char categoria[400];
  float preco;
};

int main()
{

  int i;

  struct livro L[3];

  for (i = 0; i < 3; i++)
  {
    printf("nome do livro: ");
    gets(L[i].nome);

    printf("autor: ");
    gets(L[i].autor);

    printf("categoria: ");
    gets(L[i].categoria);

    printf("preco: ");
    scanf("%f", &L[i].preco);
    
    fflush(stdin);
  }

  for (i = 0; i < 3; i++)
  {
    printf("%d livro\n", i);
    printf("nome: %s\n", L[i].nome);
    printf("autor: %s\n", L[i].autor);
    printf("categoria: %s\n", L[i].categoria);
    printf("preco: %.2f\n", L[i].preco);
    printf("");
  }

  return 0;
}