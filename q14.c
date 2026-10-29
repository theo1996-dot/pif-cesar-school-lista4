#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota do aluno (0.0 a 10.0): ");
    scanf("%f", &nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    // Validação de nota dentro do intervalo permitido
    if (nota < 0.0 || nota > 10.0) {
        printf("Erro: Nota invalida!\n");
    } else {
        // Determinando o conceito com base na nota e número de faltas
        if (nota >= 9.0) {
            if (faltas <= 20) {
                printf("Conceito A\n");
            } else {
                printf("Conceito B\n");
            }
        } else if (nota >= 7.5) {
            if (faltas <= 20) {
                printf("Conceito B\n");
            } else {
                printf("Conceito C\n");
            }
        } else if (nota >= 5.0) {
            if (faltas <= 20) {
                printf("Conceito C\n");
            } else {
                printf("Conceito D\n");
            }
        } else if (nota >= 4.0) {
            if (faltas <= 20) {
                printf("Conceito D\n");
            } else {
                printf("Conceito E\n");
            }
        } else { // Nota de 0.0 a 3.9
            printf("Conceito E\n");
        }
    }

    return 0;
}
