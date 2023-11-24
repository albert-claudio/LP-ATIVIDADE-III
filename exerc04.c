#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int pares = 0, impares = 0, negativos = 0;
    int maior, menor, somaPares = 0, somaTotal = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
            somaPares += numeros[i];
        } else {

            impares++;
        }

        if (numeros[i] < 0) {
            negativos++;
        }

        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }

        somaTotal += numeros[i];
    }


    double mediaTotal = somaTotal / 5;

    double mediaPares = (pares > 0) ? somaPares / pares : 0;


    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de números inseridos: %.2f\n", mediaTotal);

    return 0;
}
