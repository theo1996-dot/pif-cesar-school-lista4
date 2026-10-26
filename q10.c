#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o numero e par ou impar
    if (numero % 2 == 0) {
        printf("O numero e PAR.\n");
    } else {
        printf("O numero e IMPAR.\n");
    }

    // Verifica se o numero e positivo, negativo ou zero
    if (numero > 0) {
        printf("O numero e POSITIVO.\n");
    } else if (numero < 0) {
        printf("O numero e NEGATIVO.\n");
    } else {
        printf("O numero e ZERO.\n");
    }

    return 0;
}
