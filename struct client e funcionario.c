#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
    char nome[1000];
    char idade[1000];
    char cpf[1000];
};

/*struct client
{
    char nome[1000];
    char idade[1000];
    char cpf[1000];
};*/

int main()
{

    struct funcionario a;
    struct funcionario b;

    printf("\nregistro funcionario:\n");


    printf("digite o nome do funcionario: ");
    gets(a.nome);    
  

    printf("digite a idade do funcionario: ");
    gets(a.idade);    
 

    printf("digite o cpf do funcionario: ");
    gets(a.cpf);    
    fflush(stdin);

    printf("\nregistro cliente:\n");

    printf("digite o nome do cliente: ");
    gets(b.nome);
    

    printf("digite a idade do cliente: ");
    gets(b.idade); 
   

    printf("digite o cpf do cliente: ");
    gets(b.cpf);
    fflush(stdin);

system("clear||cls");

    printf("\ndados do funcionario:\n");
    printf("nome do funcionario: %s\n", a.nome);
    printf("idade do funcionario: %s\n", a.idade);
    printf("cpf do funcionario: %s\n", a.cpf);

    printf("\ndados do cliente:\n");

    printf("nome do cliente: %s\n", b.nome);
    printf("idade do cliente: %s\n", b.idade);
    printf("cpf do cliente: %s\n", b.cpf);

    return 0;
}