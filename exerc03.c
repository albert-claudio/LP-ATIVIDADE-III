#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

      char nomes[9999][200];
      int telefones[9999];
      int opcao;
      int contador = 0, i;

do
{
    printf("Digite 1 para adicionar: \n");
    printf("Digite 2 para encerrar: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        fflush(stdin);

        printf("Digite o nome: \n");
        gets(nomes[contador]);

        printf("Digite o telefone: \n");
        scanf("%d", &telefones[contador]);

        contador++;
        system("cls || clear");
        break;

        case 2:
        printf("Números cadastrados: \n");
        for ( i = 0; i < contador; i++)
        {
            printf("Nome: %s \t Telefone: %d \n", nomes[i], telefones[i]);
        }
        break;
    
    default:
    printf("Código inválido!");
    system("cls || clear");
    break;
    }


} while (opcao != 2);


    return 0;
}
