#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "portuguese");
    char nomes[5][50];
    int idades[5];
    float pesos[5];
    float alturas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ",i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a idade da pessoa %d: ",       i + 1);
        scanf("%d", &idades[i]);
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
    }

   
    int indiceMaisAlta = 0, indiceMaisBaixa = 0;
    int indiceMaiorPeso = 0, indiceMenorPeso = 0;
    int indiceMaisVelha = 0, indiceMaisNova = 0;

    for (int i = 1; i < 5; i++) {
        // Altura
        if (alturas[i] > alturas[indiceMaisAlta])
            indiceMaisAlta = i;
        if (alturas[i] < alturas[indiceMaisBaixa])
            indiceMaisBaixa = i;

        if (pesos[i] > pesos[indiceMaiorPeso])
            indiceMaiorPeso = i;
        if (pesos[i] < pesos[indiceMenorPeso])
            indiceMenorPeso = i;
        if (idades[i] > idades[indiceMaisVelha])
            indiceMaisVelha = i;
        if (idades[i] < idades[indiceMaisNova])
            indiceMaisNova = i;
    }

  
    printf("\nNome e altura da pessoa mais alta: %s, %.2f\n", nomes[indiceMaisAlta], alturas[indiceMaisAlta]);
    printf("Nome e altura da pessoa mais baixa: %s, %.2f\n", nomes[indiceMaisBaixa], alturas[indiceMaisBaixa]);
    
    printf("Nome e peso da pessoa com maior peso: %s, %.2f\n", nomes[indiceMaiorPeso], pesos[indiceMaiorPeso]);
    printf("Nome e peso da pessoa com menor peso: %s, %.2f\n", nomes[indiceMenorPeso], pesos[indiceMenorPeso]);

    printf("Nome e idade da pessoa mais velha: %s, %d\n", nomes[indiceMaisVelha], idades[indiceMaisVelha]);
    printf("Nome e idade da pessoa mais nova: %s, %d\n", nomes[indiceMaisNova], idades[indiceMaisNova]);

    return 0;
}