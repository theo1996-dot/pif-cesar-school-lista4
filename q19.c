#include <stdio.stdio.h>

int main() {
    float a, b, c;

    // Leitura dos três lados
    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    // Verificação da condição de existência do triângulo
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        // Classificação do triângulo
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}
