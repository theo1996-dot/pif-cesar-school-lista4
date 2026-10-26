#include <stdio.h>
#include <math.h>

int main() {
    float numero, resultado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("Raiz quadrada: %.2f\n", resultado);
    } else {
        resultado = numero * numero;
        printf("Quadrado do numero: %.2f\n", resultado);
    }

    return 0;
}
