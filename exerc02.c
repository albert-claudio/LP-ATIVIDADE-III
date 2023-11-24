#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float nota[5][3];
    float soma;
    float media[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        soma = 0;  // Inicializa a soma para cada aluno

        printf("Digite o nome do %dº aluno: \n", i + 1);
        scanf("%s", nome[i]);

        printf("Digite a idade do %dº aluno: \n", i + 1);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Digite a %dª nota: \n", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }

        media[i] = soma / j;  // Calcula a média corretamente
        setbuf(stdin, NULL);  // Limpa o buffer do teclado

    }

    for (i = 0; i < 5; i++) {
        printf("\nInformações do %dº aluno: \n", i + 1);
        printf("Nome: %s \n", nome[i]);
        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < 3; j++) {
            printf("%dª nota: %.2f \n", j + 1, nota[i][j]);
        }

        printf("Média: %.2f\n", media[i]);

        if (media[i] >= 7) {
            printf("Situação: Aprovado\n");
        } else if (media[i] >= 5) {
            printf("Situação: Recuperação\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}
