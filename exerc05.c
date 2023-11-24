#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "portuguese");
 
    char produtos[MAX_VENDAS][50];
    float precos[MAX_VENDAS];
    int quantidades[MAX_VENDAS];
    int numVendas = 0;
    float totalVendas = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar venda\n");
        printf("2. Exibir total de vendas e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                if (numVendas < MAX_VENDAS) {
                    printf("\nDigite o nome do produto: ");
                    scanf(" %s", produtos[numVendas]);  
                    printf("Digite o preço do produto: ");
                    scanf("%f", &precos[numVendas]);
                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &quantidades[numVendas]);

                    totalVendas += precos[numVendas] * quantidades[numVendas];

                    numVendas++;
                } else {
                    printf("\nLimite de vendas atingido.\n");
                }
                break;
            }
            case 2: {
                printf("\nTotal de vendas realizadas: R$%.2f\n", totalVendas);
                break;
            }
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (opcao != 2);    


 return 0;
}