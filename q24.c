#include <stdio.h>

int main() {
    int a1, a2, a3;

    printf("Digite os três ângulos internos do triângulo: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 != 180 || a1 <= 0 || a2 <= 0 || a3 <= 0) {
        printf("Erro: Os ângulos fornecidos não formam um triângulo válido!\n");
    } else if (a1 == 90 || a2 == 90 || a3 == 90) {
        printf("Triângulo Retângulo\n");
    } else if (a1 > 90 || a2 > 90 || a3 > 90) {
        printf("Triângulo Obtusângulo\n");
    } else {
        printf("Triângulo Acutângulo\n");
    }

    return 0;
}
